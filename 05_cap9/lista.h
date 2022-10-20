#include <stdio.h>
#include <iostream>

using namespace std;

typedef int Iteml;

class No {
	public:
		Iteml item;
		No *prox;

		No(Iteml n) {
			item = n;
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

		void listarAoFinal(Iteml n){
			No *novo = new No(n);

			if (this->listaVazia()) {
				inicio = novo;
				fim = novo;
			} else {
				fim->prox = novo;
				fim = novo;
			}
		}

		void listarAoInicio(Iteml n){
			No *novo = new No(n);

			if (this->listaVazia()) {
				inicio = novo;
				fim = novo;
			} else {
				novo->prox = inicio;
				inicio = novo;
			}
		}

		void mostrarLista() {
			if (this->listaVazia()){
				cout << "Lista vazia!" << endl;
			} else {
				cout << "Lista: ";

				No *aux = inicio;

				while (aux != NULL) {
					cout << aux->item << " ";

					aux = aux->prox;
				}

                cout << endl;
			}
		}
/*
		void consultar(Iteml item) {
			No *aux = inicio;
			No *alunoBuscado = NULL;

			while (aux->prox != NULL) {
				if (aux->item == item) {
					alunoBuscado = aux;
					break;
				}  
				
				aux = aux->prox;
			}

			if (alunoBuscado == NULL) {
				cout << "Aluno não encontrado!" << endl << endl;
			} else {
				cout << "Aluno encontrado:" << endl << endl;
				cout << "Matrícula: " << alunoBuscado->item << endl << endl;
			}
		}
		
		void remover(Iteml item) {
			if (this->listaVazia()) {
				cout << "Lista vazia!" << endl;
			} else {
				No *aux = inicio;
				No *anterior = NULL;

				while (aux->prox != NULL) {
					if (aux->item == item) {
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
					listaInvertida->listarAoInicio(aux->item);

					aux = aux->prox;
				}

				listaInvertida->listarAoInicio(aux->item);

				return listaInvertida;
			}	
		}

		void listaInvertida() {
			Lista *listaInvertida = this->criarListaInvertida();
			this->removerTodos();

			No *aux = listaInvertida->inicio;

			while (aux->prox != NULL) {
				this->listarAoFinal(aux->item);

				aux = aux-> prox;
			}

			this->listarAoFinal(aux->item);
		}
*/
};