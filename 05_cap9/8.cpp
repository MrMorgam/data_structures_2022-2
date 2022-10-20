#include "./lista_char.h"
#include <iostream>

using namespace std;

char enesimo(char n, Lista l) {
    return 0;
}

int main() {
    Lista l = no('a', no('b', no('c', no('d', NULL))));
    exibeLista(l);

    cout << "O 3º elemento da lista é: " << enesimo(3, l) << endl;

    return 0;
}