#include <stdio.h>
#include <stdlib.h>

typedef int Itemp;

typedef struct pilha { 
	int max;			
	int topo;			
	Itemp *item;
} *Pilha;


Pilha pilha(int m){ 
	Pilha p = (Pilha)malloc(sizeof(Pilha)); 
	p->max=m;
	p->topo=-1;
	p->item=(Itemp*)malloc(m*sizeof(Itemp));
	return p;	
}


bool pilhaVazia(Pilha p){
	return (p->topo == -1);
}


bool pilhaCheia(Pilha p){
	return (p->topo == (p->max-1));
}


void push(Itemp n, Pilha p){
	if(pilhaCheia(p)){
		printf("Pilha cheia");
	} else {
		p->topo += 1;
		p->item[p->topo] = n;	
	}	
}


Itemp pop(Pilha p) { 
	if(pilhaVazia(p)){
		printf("Pilha vazia");
	} else {
		Itemp x = p->item[p->topo];
		p->topo-=1;
		return x;
	}
}


void destroi(Pilha *Q){
	free((*Q)->item);
	(*Q)->item = NULL;
	free(*Q);
	(*Q) = NULL;
}

Itemp getTopo(Pilha p){
	if(pilhaVazia(p)){
		printf("Pilha vazia");
	}
	return p->item[p->topo];
}