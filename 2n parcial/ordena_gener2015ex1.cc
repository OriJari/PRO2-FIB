void ordena(){
	node* nova = NULL;
	while(primer != NULL){
		node* p = primer;
		node* max = primer;
		node* ant_max = NULL;
		while(p->seg != NULL){
			if(p->seg->info > max->info) {
				max = p->seg;
				ant_max = p;
			}
			p = p->seg;
		}
		if(max != primer) ant_max->seg = max->seg;
		else primer = max->seg;
		max->seg = nova;
		nova = max;
	}
	primer = nova;

}