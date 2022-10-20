#include "./lista.h"
#include <iostream>

using namespace std;

int subtitui(char a, char b, Lista *l) {

}

int main() {
    Lista *l = new Lista();

    l->listarAoFinal('b');
    l->listarAoFinal('o');
    l->listarAoFinal('b');
    l->listarAoFinal('o');

    l->mostrarLista();

    
    return 0;
}