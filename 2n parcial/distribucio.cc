void distribucio(Cua &c){
	if(c.primer != NULL){
		int t1 = 0;
		int t2 = 0;
		ultim = c.primer;
		primer = c.primer;
		c.longitud = 0;
		longitud = 1;
		node* u = NULL;
		node* p = NULL;
		node* n = c.primer->seg;
		t1 += c.primer->temps;
		while(n != NULL){
			if(t1 <= t2){
				ultim->seg = n;
				ultim = n;
				t1 += n->temps;
				++longitud;
			}
			else{
				if(u != NULL) {
					u->seg = n;
					p = n;
					c.longitud++;
				}
				u = n;
				t2+= n->temps;
			}
			n = n->seg;
		}
		ultim->seg = NULL;
		c.primer = p;
		c.ultim = ult;
		
	}
}