#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;

    cout << "Digite um número inteiro de 3 dígitos: ";
    cin >> num;

    int cent = trunc(num / 100);
    int resto = num % 100;
    int dez = trunc(resto / 10);
    int uni =  resto % 10;

    int num_inv = uni * 100 + dez * 10 + cent;

    cout << "Número inverso: " << num_inv << endl;

    return 0;
}