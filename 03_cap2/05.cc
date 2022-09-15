#include <iostream>
#include "../pilhas/pilha1.h"

using namespace std;

bool estaBalanceado(string texto){
    int qtdCaracteres = texto.length(); 
    Pilha aberta = pilha(qtdCaracteres);

    for(int i = 0; i < qtdCaracteres; i++){
        if(texto[i] == '[' || texto[i] == '{' || texto[i] == '(') {
            push(texto[i], aberta);
        }

        if(texto[i] == ']'){
            if(!(pop(aberta) == '[')) {
                return false;
            }
        } else if(texto[i] == '}'){
            if(!(pop(aberta) == '{')) {
                return false;
            }
        } else if(texto[i] == ')'){
            if(!(pop(aberta) == '(')) {
                return false;
            }
        }
    }
    return pilhaVazia(aberta);
}

int main(){
    string texto = "{[([{}])]}";

    if(estaBalanceado(texto)){
        cout << "Balanceado";
    } else {
        cout << "Desbalanceado";
    }    
}