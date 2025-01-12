ArbreNari(int n, ArbreNari<T> &g){
	N = n;
	i_arbre(primer,g);
}

void i_arbre(node& *n,ArbreGen<T> &g){
	if(not g.es_buit()){
		n = new node;
		n->info = g.arrel();
		n->seg = vector<node*>(N,NULL);
		vector<ArbreGen<T>> f;
		g.fills(f);
		int niteracions = min(N,g.nombre_fills());
		for(int i = 0; i < niteracions; ++i){
			i_arbre(n->seg[i],f[i]);
		}
	}
}