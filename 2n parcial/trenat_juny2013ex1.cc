void trenat(Cua &c){
	node* n = prim;
	node* m = c.prim;
	if(n == NULL){
		prim = c.prim;
		ult = c.ult;
		longitud = c.longitud; 
	}
	else if(m != NULL){
		while(n->seg != NULL && m->seg != NULL){
			node* auxn = n->seg;
			node* auxm = m->seg;
			n->seg = m;
			m->seg = auxn;
			n = auxn;
			m = auxm;
		}
		if(n->seg == NULL && m->seg != NULL){//c es mes llarga
			n->seg = m;
			ult = c.ult;
		}
		if(n->seg != NULL && m->seg 0= NULL){//p.i es mes llarga
			auxn = n->seg;
			n->seg = m;
			m->seg = auxn;
		}
		else{
			n->seg = m;
			ult = c.ult;
		}
		longitud = longitud + c.longitud;
		c.prim = c.ult = NULL;
	}
}