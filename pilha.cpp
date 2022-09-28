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
		
		void push(Itemp n) {
			No *novo_no = new No(n);
			
			if (!isEmpty()){
				novo_no -> prox = topo;	
			} 
				topo = novo_no;
			}
			
			
		Itemp pop() {
			Itemp n = topo -> conteudo;
			No *no_aux = topo;
			
			topo = no_aux -> prox;
			
			free(no_aux);
			
			return n;
		}
		
		
		bool isEmpty() {
			return topo == NULL;
		}
		
		void popAll(Pilha *pilha) {
			while (!pilha -> isEmpty()) {
				pilha -> pop();
			}
			
			free(topo);
			free(pilha);
			
			pilha -> topo = NULL;

			cout << "empty stack";
		}
				
};


int main() {
	Pilha *p = new Pilha();
	
	p -> push('!');
	p -> push('d');
	p -> push('l');
	p -> push('r');
	p -> push('o');
	p -> push('W');
	p -> push(' ');
	p -> push('o');
	p -> push('l');
	p -> push('l');
	p -> push('e');
	p -> push('H');
	
	while (!p -> isEmpty()) {
		cout << p -> pop();
	}
	
	cout << endl;
	
	p -> push('!');
	p -> push('d');
	p -> push('l');
	p -> push('r');
	p -> push('o');
	p -> push('W');
	p -> push(' ');
	p -> push('o');
	p -> push('l');
	p -> push('l');
	p -> push('e');
	p -> push('H');
    
	p -> popAll(p);
	
    
	return 0;
}