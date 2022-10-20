#include "./lista.h"
#include <iostream>

using namespace std;

int ocorrencias(int x, Lista *l) {
    No *aux = l->inicio;

    int conta = 0;

    while (aux->prox != NULL) {
        if (aux->item == x) {
            conta++;
        }

        aux = aux->prox;
    }

    if (aux->item == x) {
            conta++;
    }

    return conta;
}

int main() {
    Lista *l = new Lista();

    l->listarAoFinal(1);
    l->listarAoFinal(2);
    l->listarAoFinal(1);
    l->listarAoFinal(4);
    l->listarAoFinal(1);

    l->mostrarLista();

    int num = 1;
    int num_ocorrencias = ocorrencias(num, l);

    cout << "O número " <<  num << " apareceu " << num_ocorrencias << " vez(es)." << endl;

    
    return 0;
}