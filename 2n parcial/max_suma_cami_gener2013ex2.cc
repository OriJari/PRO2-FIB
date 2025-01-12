T max_suma_cami() const{
	return i_max_suma_cami(primer_node);
}

T i_max_suma_cami(node* n){
	if(n->seg.size() == 0) return n->info;
	else{
		int max = i_max_suma_cami(n->seg[0]);
		for(int i = 1; i < n->seg.size(); ++i){
			int maxf = i_max_suma_cami(n->seg[i]);
			if(maxf > max) max = maxf;
		}
		return max+n->info;
	}
}