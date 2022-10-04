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
        enfileira(numero, A);
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
            enfileira(desenfileira(A), B);
        }                                                           
        
        desenfileira(B);

        for(int v = 0; v < (qtd_de_numeros - indice_maior - i - 1); v++){ 
            enfileira(desenfileira(B), A);
        }
        enfileira(maior, B); 
    }

    for(int i = 0; i < qtd_de_numeros; i++){
        enfileira(desenfileira(B), A);
    }

    for(int i = 0; i < qtd_de_numeros; i++){
        cout << desenfileira(A) << " ";
    }

    return 0;
}