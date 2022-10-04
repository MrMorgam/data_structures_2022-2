#include <iostream>

using namespace std;

class No {
    public:
        char conteudo;
        No *prox;
        
        No(char n) {
            conteudo = n;
            prox = NULL;
        }
};


class Fila {
    public:
        No *inicio;
        No *fim;
        
        Fila(){
            inicio = NULL;
            fim = NULL;
        }

        void insereNaFila(char n) {
            No *novo= new No(n);

            if (inicio == NULL) {
                inicio = novo;
                fim = novo;
            } else { 
                fim -> prox = novo;
                fim = novo;
            }
    	}
        
        char retiraDaFila(){
            No *elem;
            char conteudo;
            if (inicio != NULL){
                elem = inicio;
                conteudo = elem -> conteudo;
                inicio = inicio -> prox;
                free(elem);
        }

            return conteudo;
        }

        bool fila_vazia(){
            return (inicio == NULL);
        }

        void mostra(){
            No *atual;
            atual = inicio;
            cout << "\n\n--------Mostra a Fila---------------\n\n";

            while (atual != NULL){
                printf("\nConteudo: %c\n", atual->conteudo);

                atual = atual -> prox;
            }
        }
};


int main(){
    Fila *f1 = new Fila();
    Fila *f2 = new Fila();
    
    int resp;
    char letra;
    
    do {

        cout << "\nDigite a letra: ";
        cin >> letra;
        
        if (f1 -> fila_vazia() == true) {
        	f1 -> insereNaFila(letra);
		} else {
			while (f1 -> fila_vazia() != true) {
				f2 -> insereNaFila(f1 -> retiraDaFila());
			}
			
			f1 -> insereNaFila(letra);
			
			while (f2 -> fila_vazia() != true) {
				f1 -> insereNaFila(f2 -> retiraDaFila());
			}
		}


        cout << "\nDeseja continuar (1-Sim 2-Nao)? ";
        cin >> resp;

    } while (resp == 1);
    
    f1 -> mostra();
    
    return 0;
}