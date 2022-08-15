#include <iostream>

using namespace std;

float vel_ms;
float vel_kmph;

int main() {
    cout<<"Digite a velocidade em m/s: ";
    cin>>vel_ms;

    vel_kmph = vel_ms * 3.6;

    cout<<"Velocidade: " << vel_kmph << " km/h" << endl;

    return 0;
}