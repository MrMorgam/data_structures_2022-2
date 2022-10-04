#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../filas/fila.h"

using namespace std;


int main(){
    Fila *f1 = new Fila();

    f1 -> enfileira(17);
    f1 -> enfileira(25);
    f1 -> enfileira(39);
    f1 -> enfileira(46);

    int x, p, t, num;

    while (!f1 -> filaVazia()){
        x = f1 -> desenfileira();
        p = x / 10;
        t = x % 10;

        if (t > 3) {
            num = p * 10 + (t - 3);
            f1 -> enfileira(num);

        } else {
            cout << "Processo " << p  << " concluido\n";
        }
    }

};
