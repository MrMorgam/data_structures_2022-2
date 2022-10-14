#include <stdio.h>
#include <iostream>

using namespace std;

class No {
	public:
		int mat;
		string nome;
		No *prox;

		No(int m, string n) {
			mat = m;
			nome = n;			
			prox = NULL;
		}
};

class Lista {
	public:
		No *inicio;
		No *fim;
	
	    Lista() {
	    	inicio = NULL;
	    	fim = NULL;
		}

		bool listaVazia() {
			return (inicio == NULL);
		}

		void listarAoFinal(int m, string n){
			No *novo = new No(m, n);

			if (this->listaVazia()) {
				inicio = novo;
				fim = novo;
			} else {
				fim->prox = novo;
				fim = novo;
			}
		}

		void listarAoInicio(int m, string n){
			No *novo = new No(m, n);

			if (this->listaVazia()) {
				inicio = novo;
				fim = novo;
			} else {
				novo->prox = inicio;
				inicio = novo;
			}
		}

		void listar() {
			if (this->listaVazia()){
				cout << "Lista vazia!" << endl;
			} else {
				cout << "Lista de alunos: " << endl << endl;

				No *aux = inicio;
				int cont = 1;

				while (aux != NULL) {
					cout << "Aluno " << cont << endl;
					cont++;

					cout << "Nome: " << aux->nome << endl << "Matrícula: " << aux->mat << endl << endl;

					aux = aux->prox;
				}
			}
		}

		void consultar(int mat) {
			No *aux = inicio;
			No *alunoBuscado = NULL;

			while (aux->prox != NULL) {
				if (aux->mat == mat) {
					alunoBuscado = aux;
					break;
				}  
				
				aux = aux->prox;
			}

			if (alunoBuscado == NULL) {
				cout << "Aluno não encontrado!" << endl << endl;
			} else {
				cout << "Aluno encontrado:" << endl << endl;
				cout << "Nome: " << alunoBuscado->nome << endl << "Matrícula: " << alunoBuscado->mat << endl << endl;
			}
		}
		
		void remover(int mat) {
			if (this->listaVazia()) {
				cout << "Lista vazia!" << endl;
			} else {
				No *aux = inicio;
				No *anterior = NULL;

				while (aux->prox != NULL) {
					if (aux->mat == mat) {
						anterior->prox = aux->prox;
						free(aux);
						break;
					}

					anterior = aux;
					aux = aux->prox;
				}
			}
		}
		
		void removerTodos() {
			No *atual = inicio;
			No *proximo = NULL;

			while (atual != NULL){
				proximo = atual->prox;
				free(atual);
				atual = proximo;						
			}

			inicio = atual;
		}
		
		Lista *criarListaInvertida() {
			if (this->listaVazia()) {
				cout << "Lista vazia!" << endl;
			} else {
				Lista *listaInvertida = new Lista();

				No *aux = inicio;
				
				while (aux->prox != NULL) {
					listaInvertida->listarAoInicio(aux->mat, aux->nome);

					aux = aux->prox;
				}

				listaInvertida->listarAoInicio(aux->mat, aux->nome);

				return listaInvertida;
			}	
		}

		void listaInvertida() {
			Lista *listaInvertida = this->criarListaInvertida();
			this->removerTodos();

			No *aux = listaInvertida->inicio;

			while (aux->prox != NULL) {
				this->listarAoFinal(aux->mat, aux->nome);

				aux = aux-> prox;
			}

			this->listarAoFinal(aux->mat, aux->nome);
		}
};


int main() {
	Lista *l1 = new Lista();

	l1->listarAoFinal(1, "Joao");
	l1->listarAoFinal(2, "Gabriela");
	l1->listarAoFinal(3, "Fabiola");
	l1->listarAoInicio(5, "Joana Oliveira");
	l1->listarAoInicio(6, "Cristiano Oliveira");
	l1->listar();

	//l1->consultar(2);
	//l1->consultar(11);

	//l1->remover(2);
	//l1->listar();
 
	//l1->listaInvertida();
	//l1->listar();

	//Lista *l2 = l1->criarListaInvertida();
	//l2->listar();

	//l1->listaInvertida();
	//l1->listar();

	//l1->removerTodos();
	//l1->listar();

	return 0;
}
