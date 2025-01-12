(a) 

static node* cerca(node *p, const T &x){
	while(p->seg != nullptr){
		if(p->seg->info == x) return p;
		p = p->seg;
	}
}

(b)

void mou_al_front(node* p){
	node* aux = p->seg;
	p->seg = aux->seg;
	aux->seg = sent->seg;
	sent->seg = aux;
}

(c)

bool conte(const T &x){
	node *n = cerca(sent,x);
	if(n == nullptr) return false;
	else {
		mou_al_front(n);
		return true;
	}
}

(d)

void afegeix(const T &x){
	if(not conte(x)){
		node* n = new node;
		n->info = x;
		n->seg = sent->seg;
		sent->seg = n;
		++tam;
	}
}

