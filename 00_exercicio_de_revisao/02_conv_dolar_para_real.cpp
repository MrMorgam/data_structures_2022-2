#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float cot_usd;
    float valor_usd;

    cout << "Digite a cotação do dólar (USD) em reais (BRL): ";
    cin >> cot_usd;

    cout << "Digite o valor em dólares: ";
    cin >> valor_usd;

    float valor_brl = valor_usd * cot_usd;

    cout << "Valor em reais: R$ " << fixed << setprecision(2) << valor_brl << endl;

    return 0;
}