#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float raio;

    cout << "Digite a medida do raio da circunferência: ";
    cin >> raio;

    float comp_circunf = 2 * M_PI * raio;

    cout << "Comprimento da circunferência: " << comp_circunf << endl;

    return 0;
}