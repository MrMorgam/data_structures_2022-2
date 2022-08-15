#include <iostream>

using namespace std;

float vel_mps;
float vel_kmph;

int main() {
    cout<<"Digite a velocidade em km/h: ";
    cin>>vel_kmph;

    vel_mps = vel_kmph / 3.6;

    cout<<"Velocidade: " << vel_mps << " m/s" << endl;

    return 0;
}