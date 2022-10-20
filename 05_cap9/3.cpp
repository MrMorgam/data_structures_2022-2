#include "./lista_char.h"
#include <iostream>

using namespace std;

char ultimo(Lista l) {
    while (l->prox != NULL) {
        l = l->prox;
    }

    return l->item;
}


int main() {
    Lista l = no('a', no('b', no('c', NULL)));
    exibeLista(l);

    cout << "O último caractere da lista: " << ultimo(l) << endl;

    
    return 0;
}