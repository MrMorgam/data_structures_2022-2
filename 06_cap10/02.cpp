#include "lista_estatica_ordenada.hpp"
#include <iostream>
using namespace std;

int main(){
    string option = "s";
    int numero;
    Lista listaOrdenada = NULL;

    while(option == "s"){
        cout << "Digite um numero: ";
        cin >> numero;

        ins(numero, &listaOrdenada);

        cout << "Deseja inserir mais algum numero? s/n ";
        cin >> option;
    }
    exibe_inv(listaOrdenada);
}