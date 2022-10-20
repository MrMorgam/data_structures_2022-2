#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int Item;

typedef struct no{
	Item item;
	struct no *prox;
} *Lista;

Lista no(Item n, Lista l) {
	Lista p = (Lista)malloc(sizeof(struct no));
	p->item = n;
	p->prox = l;

	return p;
}

void exibeLista(Lista l) {
	while (l != NULL)  {
		cout << l->item << " ";

		l = l->prox;
	}

	cout << endl;
}