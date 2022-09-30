#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salario;

    cout << "Digite o salário em R$: ";
    cin >> salario;

    float acresc = 0.25 * salario;
    float novo_salario = salario + acresc;

    cout << "Novo salário: R$ " << fixed << setprecision(2) << novo_salario << endl;

    return 0;
}