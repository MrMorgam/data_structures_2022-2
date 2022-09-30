#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float valor_dinheiro;

    cout << "Digite um valor em R$: ";
    cin >> valor_dinheiro;

    float novo_valor = 0.70 * valor_dinheiro;

    cout << "Novo valor: R$ " << fixed << setprecision(2) << novo_valor << endl;

    return 0;
}