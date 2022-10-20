#include "./lista_int.h"
#include <iostream>

using namespace std;

int ocorrencias(int x, Lista l) {
    int contador = 0;

    while (l->prox != NULL) {
        if (l->item == x) {
            contador++;
        }

        l = l->prox;
    }

    if (l->item == x) {
        contador++;
    }

    return contador;
}

int main() {
    Lista l = no(1, no(2, no(1, no(4, no(1, NULL)))));
    exibeLista(l);

    cout << "Ocorrências do número 1: " << ocorrencias(1, l) << endl;

    return 0;
}