void arbre_max_min(ArbreGen<T> &amax, ArbreGen<T> &amin){
	node* nmax,nmin;
	T maxi,mini;
	i_amm(primer_node,nmax,nmin,maxi,mini);
	amax.primer_node = nmax;
	amin.primer_node = nmin;
}

void i_amm(node* n,node* &nmax, node* &nmin,T &maxi, T &mini){
	if(n->seg.size() == 0){
		maxi = mini = n->info;
		nmax = new node;
		nmax->info = n->info;
		nmin = new node;
		nmin->info = n->info;
	}
	else{
		maxi = n->info;
		mini = n->info;
		T maxih,minih;
		node* nmaxh,nminh;
		nmax = new node;
		nmin = new node;
		for(int i = 0; i < n->seg.size(); ++i){
			i_amm(n->seg[i],nmaxh,nminh,maxih,minih);
			nmax->seg.push_back(nmaxh);
			nmin->seg.push_back(nminh);
			if(maxih > maxi) maxi = maxih;
			if(minih < mini) mini = minih;
		}
		nmax->info = maxi;
		nmin->info = mini;
	}
}