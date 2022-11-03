#include "lista_estatica_ordenada.hpp"
#include <iostream>
using namespace std;

int main(){
    string option = "s";
    int numero;
    Lista listaTeste = NULL;

    while(option == "s"){
        cout << "Digite um numero: ";
        cin >> numero;

        insSR(numero, &listaTeste);

        cout << "Deseja inserir mais algum numero? s/n ";
        cin >> option;
    }
    exibe(listaTeste);
}