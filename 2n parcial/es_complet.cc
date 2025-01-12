bool es_complet(){
	int h;
	return i_es_complet(primer,h);
}

bool i_es_complet(node* n, int &h){
	if(n == NULL) {
		h = 0;
		return true;
	}
	else{
		int hf; 
		bool complet = i_es_complet(n->seg[0],h);
		for(int i = 1; i < N and complet; ++i){
			bool completf = i_es_complet(n->seg[i],hf);
			complet = (completf and h == hf);
		}
		++h;
		return complet;
	}
}



void completa(const T &v){
	int h = altura(primer);
	i_completa(primer,N,h,v);
}

static void i_completa(node* n,int N, int h, const T &v){
	if(h != 0){
		if(n == NULL){
			n = new node;
			n->info = v;
			n->seg = vector<node*>(N,NULL);
		}
			for(int i = 0; i < N; ++i){
				i_completa(n->seg[i],N,h-1,v);
			}
		
	}
}


