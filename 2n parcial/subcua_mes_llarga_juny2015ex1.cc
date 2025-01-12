void subcua_mes_llarga(const T &elem, Cua &sub){
	node* n = prim;
	while(n != NULL && n->info != elem) n = n->seg;
	if(n != NULL){
		int lmax, l;
		l = lmax = 0;
		node* m = n;
		while(n->seg != NULL && n->seg->info != elem){
			n = n->seg;
			++l;
		}
		while(n->seg != NULL){
			if(l > lmax){
				sub.prim = m;
				sub.ult = n;
				lmax = l;
			}
			l = 0;
			m = n;
			n = n->seg;
			while(n->seg != NULL && n->seg->info != elem){
				n = n->seg;
				++l;
			}
		}
		sub.prim->seg = sub.ult->seg;
		sub.prim = sub.prim->seg;
		sub.ult = NULL;
		sub.longitud = lmax;
		longitud -= lmax;

	}
}