#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float raio;

    cout << "Digite a medida do raio da circunferĂȘncia: ";
    cin >> raio;

    float comp_circunf = 2 * M_PI * raio;

    cout << "Comprimento da circunferĂȘncia: " << comp_circunf << endl;

    return 0;
}