#include <iostream>

using namespace std;

int main()
{
    float peso_kg;
    
    cout << "Digite o peso em kg: ";
    cin >> peso_kg;

    float peso_g = peso_kg * 1000;

    cout << "Comprimento em gramas: " << peso_g << " g" << endl;

    return 0;
}