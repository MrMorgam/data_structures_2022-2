#include <stdio.h>
#include <stdlib.h>

typedef int Itemp;

typedef struct fila{ //ao invés de ter que definir uma variável do tipo pilha tendo que 
	int max;			//escrever struct pilha [nome da variavel]
	int fim;
    int inicio;			//você só precisa escrever Pilha [nome da variável]
	Itemp *item;
} *Fila;


Fila fila(int m){ //uma função
	Fila p = (Fila)malloc(sizeof(Fila)); //malloc retorna um endereço de memória, portante um ponteiro deve recebê-lo
	p->max=m;    //struct sendo passada por refer�ncia deve ser acessada dessa forma ou (*p).max
	p->fim=-1;
    p->inicio=-1;
	p->item=(Itemp*)malloc(m*sizeof(Itemp));
	return p;	
}


bool filaVazia(Fila p){
	return (p->fim == p->inicio && p->inicio == -1);
}


bool filaCheia(Fila p){
	return (p->fim == (p->max-1));
}


void enfileira(Itemp n, Fila p){
	if(filaCheia(p)){
		printf("Fila cheia");
	} else if (filaVazia(p)){
		p->fim += 1;
        p->inicio +=1;
		p->item[p->fim] = n;	
    } else {
        p->fim += 1;
		p->item[p->fim] = n;
    }
}


Itemp desenfileira(Fila p){ //retorna o item  removido
	if(filaVazia(p)){
		printf("Fila vazia");
	} else if (p->fim == p->inicio){
        Itemp x = p->item[p->inicio];
		p->inicio= -1;
        p->fim = -1;
		return x;
    } else {
		Itemp x = p->item[p->inicio];
		p->inicio+=1;
		return x;
	}
}

void destroiFila(Fila *Q){
	free((*Q)->item);
	(*Q)->item = NULL;
	free(*Q);
	(*Q) = NULL;
}

Itemp getTopo(Fila p){
	if(filaVazia(p)){
		printf("Pilha vazia");
	}
	return p->item[p->fim];
}