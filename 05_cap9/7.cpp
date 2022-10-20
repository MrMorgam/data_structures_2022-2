#include "./lista_int.h"
#include <iostream>

using namespace std;

int igual(Lista a, Lista b) {
    if (a == NULL && b == NULL) {
        return 1;
    } 

    if (a->item == b->item) {
        return igual(a->prox, b->prox);
    } else {
        return 0;
    }

}

int main() {
    Lista i = no(1, no(2, no(3, NULL)));
    Lista j = no(1, no(2, no(3, NULL)));
    Lista k = no(1, no(3, no(2, NULL)));

    exibeLista(i);
    exibeLista(j);
    exibeLista(k);

    cout << "Lista I é igual à lista J? (1-sim, 0-não): " << igual(i, j) << endl;
    cout << "Lista J é igual à lista K? (1-sim, 0-não): " << igual(j, k) << endl;

    return 0;
}