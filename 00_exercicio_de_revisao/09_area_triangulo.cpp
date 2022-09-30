#include <iostream>

using namespace std;

int main()
{
    float base;
    float altura;

    cout << "Digite a medida da base do triângulo: ";
    cin >> base;

    cout << "Digite a medida da altura do triângulo: ";
    cin >> altura;

    float area_triangulo = (base * altura) / 2;

    cout << "Área do triângulo: " << area_triangulo << endl;

    return 0;
}