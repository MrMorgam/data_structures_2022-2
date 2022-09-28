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
        
        
        void push(Itemf n) {
            No *novo_no = new No(n);
            
            if (isEmpty()) {
                inicio = novo_no;
            } else {
                fim -> prox = novo_no;
            }
            
            fim = novo_no;
        }
        
        
        Itemf pop() {
            Itemf n = inicio -> conteudo;
            No *no_aux = inicio;
            inicio = inicio -> prox;
            free(no_aux);
            
            return n;
        }
        
        bool isEmpty() {
        	return inicio == NULL;
		}
		
		void popAll(Fila *fila) {
			while (!fila -> isEmpty()) {
				fila -> pop();
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
    
    f -> push('H');
    f -> push('e');
    f -> push('l');
    f -> push('l');
    f -> push('o');
    f -> push(' ');
    f -> push('W');
    f -> push('o');
    f -> push('r');
    f -> push('l');
    f -> push('d');
    f -> push('!');
    
    while (!f -> isEmpty()) {
    	cout << f -> pop();
	}
	
	cout << endl;
	
f -> push('H');
    f -> push('e');
    f -> push('l');
    f -> push('l');
    f -> push('o');
    f -> push(' ');
    f -> push('W');
    f -> push('o');
    f -> push('r');
    f -> push('l');
    f -> push('d');
    f -> push('!');
    
    f -> popAll(f);
    
    
    return 0;
}