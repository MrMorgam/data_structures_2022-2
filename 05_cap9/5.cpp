#include "./lista.h"
#include <iostream>

using namespace std;

int soma(Lista *l) {
	No *aux = l->inicio;

    int soma = 0;

    while (aux != NULL) {
        soma = soma + aux->item;

        aux = aux->prox;
    }

    return soma;
}

int main() {
    Lista *l = new Lista();

    l->listarAoFinal(1);
    l->listarAoFinal(2);
    l->listarAoFinal(1);
    l->listarAoFinal(4);
    l->listarAoFinal(1);

    l->mostrarLista();

    int soma_lista = soma(l);

    cout << "Soma dos elementos da lista: " << soma_lista << endl;

    
    return 0;
}