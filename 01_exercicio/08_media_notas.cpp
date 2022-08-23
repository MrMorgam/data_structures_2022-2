#include <iostream>

using namespace std;

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float peso1;
    float peso2;
    float peso3;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite o peso da primeira nota: ";
    cin >> peso1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite o peso da segunda nota: ";
    cin >> peso2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite o peso da terceira nota: ";
    cin >> peso3;

    float media_pond = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    cout << "Média das notas: " << media_pond << endl;

    return 0;
}