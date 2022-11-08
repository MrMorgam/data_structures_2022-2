#include <queue>
#include <iostream>

using namespace std;

template <class T>

class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
		T popQueue() {
			T tmp = fila.front();
			fila.pop();
			return tmp;
		}
	
		void popTodos() {				
			while (!fila.empty()) {
				cout << fila.front() << endl;
				fila.pop();
			}
    	}
    
   		void simulaPilha(T novo) {
			Queue<T> fila_aux;

			fila_aux.push(novo);

			T tmp;

			while (!fila.empty()) {
				tmp = fila.front();
				fila_aux.push(tmp);
				fila.pop();
			}

			while (!fila_aux.empty()) {
				tmp = fila_aux.front();
				fila.push(tmp);
				fila_aux.pop();
			}
		}
};

int main() {
	Queue<int> fila;

	cout << fila.front() << endl;

	fila.simulaPilha(1);
	fila.simulaPilha(2);
	fila.simulaPilha(3);

	cout << fila.front() << endl;


	return 0;
}