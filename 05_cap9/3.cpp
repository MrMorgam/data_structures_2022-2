#include "./lista.h"
#include <iostream>

using namespace std;

int ultimo(Lista *l) {
    return l->fim->item;
}

int main() {
    Lista *l = new Lista();

    l->listarAoFinal(1);
    l->listarAoFinal(2);
    l->listarAoFinal(1);
    l->listarAoFinal(4);
    l->listarAoFinal(1);

    l->mostrarLista();

    int ultimo_num = ultimo(l);

    cout << "O último número da lista: " << ultimo_num << endl;

    
    return 0;
}