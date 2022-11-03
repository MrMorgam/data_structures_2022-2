#include <queue>
#include <iostream>

using namespace std;

template <class T>

class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
		T popQueue(){
			T tmp = fila.front();
			fila.pop();
			return tmp;
		}
	
	
		void popTodos(){				
			while (!fila.empty()) {
				fila.popQueue();
			}
    	}
    
   		void simulaPilha(T novo){
    
		}
};

int main() {
	Queue<int> fila;
	cout << fila.front() << endl;
	fila.push(4);
	fila.push(5);
	cout << fila.front() << endl;
	fila.popTodos();
	cout << fila.front() << endl;

	return 0;
}
