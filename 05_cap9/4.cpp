#include "./lista.h"
#include <iostream>

using namespace std;

Lista *inversa(Lista *l) {
	Lista *listaInvertida = new Lista();

	No *aux = l->inicio;
				
	while (aux->prox != NULL) {
		listaInvertida->listarAoInicio(aux->item);

		aux = aux->prox;
	}

	listaInvertida->listarAoInicio(aux->item);

	return listaInvertida;
}

int main() {
    Lista *l = new Lista();

    l->listarAoFinal(1);
    l->listarAoFinal(2);
    l->listarAoFinal(1);
    l->listarAoFinal(4);
    l->listarAoFinal(1);

    l->mostrarLista();

    Lista *lista_invertida = inversa(l);

    lista_invertida->mostrarLista();

    
    return 0;
}