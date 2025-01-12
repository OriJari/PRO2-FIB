int IPL(node* n, int &t){
	if(n == nullptr){
		t = 0; 
		return 0;
	}
	else{
		int te,td;
		int IPLe = IPL(n->esq,te);
		int IPLd = IPL(n->dre,td);
		t = te + td + 1;
		return IPLe + IPLd + te + td;
	}
}

double longitud_mitja_camins(){
	int t;
	int ipl = IPL(primer,t);
	return ipl/(double) t;
}