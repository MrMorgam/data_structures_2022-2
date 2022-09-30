#include <iostream>
#include <stdio.h>
#include "../pilhas/pilha1.h"

using namespace std;

int main(){
    
    int qtd_de_numeros, indice_maior;
    int numero, maior;
    printf("Quantos numeros a pilha tera? ");
    scanf("%i", &qtd_de_numeros);

    Pilha A = pilha(qtd_de_numeros);
    Pilha B = pilha(qtd_de_numeros);


    printf("Preencha a pilha com %i numeros: ", qtd_de_numeros);


    for(int i = 0; i < qtd_de_numeros; i++){
        scanf("%d", &numero);
        push(numero, A);
    }


    for(int i = 0; i < qtd_de_numeros; i++){
        indice_maior = 0;
        maior = A->item[0];

        for(int j = 0; j < qtd_de_numeros - i; j++){

            if(A->item[j] > maior){
                indice_maior = j;
                maior = A->item[j];
            }
        }

        for(int k = 0; k < qtd_de_numeros - indice_maior - i; k++){
            push(pop(A), B);
        }                                                           
        
        pop(B);

        for(int v = 0; v < (qtd_de_numeros - indice_maior - i - 1); v++){ 
            push(pop(B), A);
        }
        push(maior, B); 
    }

    for(int i = 0; i < qtd_de_numeros; i++){
        push(pop(B), A);
    }

    for(int i = 0; i < qtd_de_numeros; i++){
        cout << pop(A) << " ";
    }

    return 0;
}