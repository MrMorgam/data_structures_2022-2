#include <iostream>

using namespace std;

int main()
{
    float vel_kmph;

    cout << "Digite a velocidade em km/h: ";
    cin >> vel_kmph;

    float vel_mps = vel_kmph / 3.6;

    cout << "Velocidade: " << vel_mps << " m/s" << endl;

    return 0;
}