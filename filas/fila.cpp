#include <iostream>

using namespace std;


typedef char Itemf;

class No {
    public:
        Itemf conteudo;
        No *prox;
    
        No(Itemf n) {
            conteudo = n;
            prox = NULL;
        }
};


class Fila {
    public:
        No *inicio;
        No *fim;
        
        Fila() {
            inicio = NULL;
            fim = NULL;
        }
        
        
        void enfileira(Itemf n) {
            No *novo_no = new No(n);
            
            if (filaVazia()) {
                inicio = novo_no;
            } else {
                fim -> prox = novo_no;
            }
            
            fim = novo_no;
        }
        
        
        Itemf desenfileira() {
            Itemf n = inicio -> conteudo;
            No *no_aux = inicio;
            inicio = inicio -> prox;
            free(no_aux);
            
            return n;
        }
        
        bool filaVazia() {
        	return inicio == NULL;
		}
		
		void desenfileiraTodos(Fila *fila) {
			while (!fila -> filaVazia()) {
				fila -> desenfileira();
			}
			
			free(inicio);
			free(fim);
			free(fila);
			
			inicio = NULL;
			fim = NULL;

			cout << "empty stack";
		}
};


int main() {
    Fila *f = new Fila();
    
    f -> enfileira('H');
    f -> enfileira('e');
    f -> enfileira('l');
    f -> enfileira('l');
    f -> enfileira('o');
    f -> enfileira(' ');
    f -> enfileira('W');
    f -> enfileira('o');
    f -> enfileira('r');
    f -> enfileira('l');
    f -> enfileira('d');
    f -> enfileira('!');
    
    while (!f -> filaVazia()) {
    	cout << f -> desenfileira();
	}
	
	cout << endl;
	
f -> enfileira('H');
    f -> enfileira('e');
    f -> enfileira('l');
    f -> enfileira('l');
    f -> enfileira('o');
    f -> enfileira(' ');
    f -> enfileira('W');
    f -> enfileira('o');
    f -> enfileira('r');
    f -> enfileira('l');
    f -> enfileira('d');
    f -> enfileira('!');
    
    f -> desenfileiraTodos(f);
    
    
    return 0;
}