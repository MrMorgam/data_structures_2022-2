#include "polinomio.hpp"
#include <iostream>
using namespace std;

int main(){
    
    Poli n = termo(3, 5, termo(-6, 2, termo(1, 0, NULL)));
    exibep(n);

    cout << endl;

    Poli g = termo(1, 5, termo(2, 1, termo(1, 0, NULL)));
    exibep(g);
    cout << endl;

    Poli t = soma(n, g);

    exibep(t);
}