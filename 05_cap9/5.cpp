#include "./lista_int.h"
#include <iostream>

using namespace std;

int substitui(Lista l) {
    if (l->prox == NULL) {
        return l->item;
    } else {
        return l->item + substitui(l->prox);
    }
}

int main() {
    Lista l = no(3,no(1, no(5, no(4, NULL))));
    exibeLista(l);

    cout << "Soma dos elementos da lista: " << substitui(l) << endl;

    
    return 0;
}