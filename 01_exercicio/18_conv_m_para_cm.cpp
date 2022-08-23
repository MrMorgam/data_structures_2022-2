#include <iostream>

using namespace std;

int main()
{
    float comp_m;
    
    cout << "Digite o comprimento em m: ";
    cin >> comp_m;

    float comp_cm = comp_m * 100;

    cout << "Comprimento em centímetros: " << comp_cm << " cm" << endl;

    return 0;
}