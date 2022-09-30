#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float raio;

    cout << "Digite a medida do raio da esfera: ";
    cin >> raio;

    float vol_esfera = (4 * M_PI * pow(raio, 3)) / 3;

    cout << "Volume da esfera: " << vol_esfera << endl;

    return 0;
}