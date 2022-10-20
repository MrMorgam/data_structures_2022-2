#include "./lista_char.h"
#include <iostream>

using namespace std;

char enesimo(int n, Lista l) {
    if (n < 0 || l == NULL) {
        return '0';
    }

    if (n == 1) {
        return l->item;
    } else {
        return enesimo(n-1, l->prox);
    }
}

int main() {
    Lista l = no('a', no('b', no('c', no('d', NULL))));
    exibeLista(l);

    cout << "O 3º elemento da lista é: " << enesimo(3, l) << endl;

    return 0;
}