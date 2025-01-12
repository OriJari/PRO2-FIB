void trams(vector<Llista<T> &v){
	if(primer != NULL){
		node* n = primer;
		Llista l;
		l.primer = primer;
		l.ult = primer;
		l.longitud = 1;
		while(n->seg != NULL){
			if(n->info <= n->seg->info){
				l.longitud++;
				l.ult = n->seg;
				n = n->seg;
			}
			else{
				n = n->seg;
				l.ult->seg = NULL;
				n->ant = NULL;
				v.push_back(l);
				l.primer = n;
				l.ult = n;
				l.longitud = 1;
			}			
		}
		v.push_back(l);
		primer = NULL;
		ultim = NULL;
		act = NULL;
		longitud = 0;
	}
}