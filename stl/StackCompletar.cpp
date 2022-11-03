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
				
		}
	
	
};

int main(){
	Stack<int> pilha;
	pilha.push(1);
	pilha.push(2);
	pilha.push(3);

	pilha.popTodos();

	cout << pilha.top() << endl;
	
	return 0;
}
