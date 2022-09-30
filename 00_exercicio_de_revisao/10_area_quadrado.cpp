#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float lado;

    cout << "Digite a medida do lado do quadrado: ";
    cin >> lado;

    float area_quadrado = pow(lado, 2);

    cout << "Área do quadrado: " << area_quadrado << endl;

    return 0;
}