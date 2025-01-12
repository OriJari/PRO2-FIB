int cerca_prof_min(const T &x){
	return i_cpm(primer_node,x,0);
}

int i_cpm(node* n, const T &x, int p){
	if(n == NULL) return -1;
	else if(n->info == x) return p;
	else{
		int res = -1;
		int ph;
		for(int i = 0; i < N;++i){
			ph = i_cpm(n->seg[i],x,p+1);
			if(ph != -1){
				if(res == -1) res = ph;
				else{
					if(ph < res) res = ph;
				}
			}
		}
		return res;
	}
}