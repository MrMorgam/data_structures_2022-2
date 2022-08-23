#include <iostream>

using namespace std;

int main()
{
    float base;
    float altura;

    cout << "Digite a medida da base do retângulo: ";
    cin >> base;

    cout << "Digite a medida da altura do retângulo: ";
    cin >> altura;

    float area_retangulo = base * altura;

    cout << "Área do retângulo: " << area_retangulo << endl;

    return 0;
}