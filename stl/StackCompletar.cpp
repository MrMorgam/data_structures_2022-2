#include <stack>
#include <iostream>

using namespace std;

template <class T>

class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
		T popStack(){
			T tmp = pilha.top();
			pilha.pop();
			return tmp;
		}
	
	
		void popTodos(){
			while (!pilha.empty()) {
				pilha.pop();
			}
    	}
	
		void simulaFila(T novo){
			Stack<int> pilha_aux;

			T tmp;

			while (!pilha.empty()) {
				tmp = pilha.top();
				pilha_aux.push(tmp);
				pilha.pop();
			}

			pilha.push(novo);

			while (!pilha_aux.empty()) {
				tmp = pilha_aux.top();
				pilha.push(tmp);
				pilha_aux.pop();
			}
		}
	
	
};

int main(){
	Stack<int> pilha;
	
	cout << pilha.top() << endl;

	pilha.simulaFila(1);
	pilha.simulaFila(2);
	pilha.simulaFila(3);

	cout << pilha.top() << endl;

	
	return 0;
}
