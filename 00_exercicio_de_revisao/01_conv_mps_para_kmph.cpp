#include <iostream>

using namespace std;

int main()
{
    float vel_ms;

    cout << "Digite a velocidade em m/s: ";
    cin >> vel_ms;

    float vel_kmph = vel_ms * 3.6;

    cout << "Velocidade: " << vel_kmph << " km/h" << endl;

    return 0;
}