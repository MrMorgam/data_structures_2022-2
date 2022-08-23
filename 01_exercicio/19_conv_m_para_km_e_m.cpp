#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int comp_total_m;
    
    cout << "Digite um comprimento inteiro em m: ";
    cin >> comp_total_m;

    int comp_km = trunc(comp_total_m / 1000);
    int comp_m = comp_total_m % 1000;

    cout << "Comprimento total: " << comp_km << " km e " << comp_m << " m" << endl;

    return 0;
}