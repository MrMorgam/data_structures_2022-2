#include <iostream>

using namespace std;


typedef char Itemp;

class No {
	public:
		Itemp conteudo;
		No *prox;
		
		No(Itemp n) {
			conteudo = n;
			prox = NULL;	
		}
};


class Pilha {
	public:
		No *topo;
		
		Pilha() {
			topo = NULL;
		}
		
		void empilha(Itemp n) {
			No *novo_no = new No(n);
			
			if (!pilhaVazia()){
				novo_no -> prox = topo;	
			} 
				topo = novo_no;
			}
			
			
		Itemp desempilha() {
			Itemp n = topo -> conteudo;
			No *no_aux = topo;
			
			topo = no_aux -> prox;
			
			free(no_aux);
			
			return n;
		}
		
		
		bool pilhaVazia() {
			return topo == NULL;
		}
		
		void desempilhaTodos(Pilha *pilha) {
			while (!pilha -> pilhaVazia()) {
				pilha -> desempilha();
			}
			
			free(topo);
			free(pilha);
			
			pilha -> topo = NULL;

			cout << "empty stack";
		}
				
};