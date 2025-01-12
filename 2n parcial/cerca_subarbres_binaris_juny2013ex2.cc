void sub_arrel(Arbre& asub,const T &x) const{
	
}

void i_sub(node* n, node* &s,const T &x, int &p) const{
	if(n != NULL){
		s = copia_node_arbre(n);
		return true;
	}
	else{
		node* se,sd;
		int pe = p+1;
		int pd = p+1;
		bool be = i_sub(n->segE,se,x,pe);
		bool bd = i_sub(n->segD,sd,x,pd);
		if(be or bd){
			if(be){
				s = se; 
				p = pe;
				if(bd and pd < pe) s = sd; p = pd;
			}
			else {
				s = sd;
				p = pd;
			}
			return true;
		}
		else return false;
	}
}