#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Digite um número: ";
    cin >> num1;

    cout << "Digite um número: ";
    cin >> num2;

    int resto = num1 % num2;
    int quoc = (num1 - resto) / num2;

    cout << "Quociente: " << quoc << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}