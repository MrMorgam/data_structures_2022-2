#include <iostream>
#include <iomanip>

using namespace std;

float cot_usd;
float valor_usd;
float valor_brl;

int main() {
    cout<<"Digite a cotação do dólar (USD) em reais (BRL): ";
    cin>>cot_usd;

    cout<<"Digite o valor em dólares: ";
    cin>>valor_usd;

    valor_brl = valor_usd * cot_usd;

    cout<<"Valor em reais: R$ "<< fixed << setprecision(2) << valor_brl << endl;

    return 0;
}