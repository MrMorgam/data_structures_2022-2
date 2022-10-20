#include "./lista_char.h"
#include <iostream>

using namespace std;

void substitui(char x, char y, Lista l) {
    if (l == NULL) {
       return;
    }
        
    if (l->item == x) {
        l->item = y;
    }

    return substitui(x, y, l->prox);
}

int main() {
    Lista l = no('b',no('o', no('b', no('o', NULL))));
    exibeLista(l);

    substitui('o', 'a', l);
    exibeLista(l);

    
    return 0;
}