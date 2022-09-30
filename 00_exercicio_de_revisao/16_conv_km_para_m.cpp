#include <iostream>

using namespace std;

int main()
{
    float comp_km;
    
    cout << "Digite o comprimento em km: ";
    cin >> comp_km;

    float comp_m = comp_km * 1000;

    cout << "Comprimento em metros: " << comp_m << " m" << endl;

    return 0;
}