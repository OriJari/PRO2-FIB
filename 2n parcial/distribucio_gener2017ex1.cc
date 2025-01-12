void distribucio(Cua &c){
	if(c.primer != NULL){
		node* n = c.primer;
		int t1 = n->temps;
		int t2 = 0;
		while(n->seguent != NULL){
			if(t1 <= t2){
				t1 += n->seguent->temps;
				n = n->seguent;
			}
			else{
				t2 += n->seguent->temps;
				if(n->seguent == c.ultim) c.ultim = n;
				if(primer == NULL) {
					primer = n->seguent;
					ultim = n->seguent;
					n->seguent = n->seguent->seguent;
					ultim->seguent = NULL;
				}
				else {
					ultim->seguent = n->seguent;
					ultim = n->seguent;
					n->seguent = n->seguent->seguent;
					ultim->seguent = NULL;
				}
				++longitud;
			}
		}
		c.longitud -= longitud;
	}
}