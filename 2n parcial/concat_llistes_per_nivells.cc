void transferir(Llista<T> &dest){
	node* n = primer_node;
	primer_node = n->seg;
	if(dest.ultim_node != NULL) dest.ultim_node->seg = n;
	n->ant = dest.ultim_node;
	n->seg = NULL;
	longitud--;
	dest.longitud++;

}