#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class No {
	public:
		int mat;
		char nome[23];
		No *prox;

		No(int m, char n[23]) {
			mat = m;
			strcpy(nome, n);			
			prox = NULL
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
	
	    Lista() {
	    	inicio = NULL;
	    	fim = NULL;
		}

		void adicionaAoFinal(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox = novo;
				fim = novo;
			}
		}
			
		int listaVazia(){
			return (inicio == NULL);
		}

		void adicionaAoInicio(int m, char n[23]){
			
			
		}

		void mostra(){
			if (listaVazia()){
				cout << "\nLista vazia!!!";
			} else {
				
				
			}
		}
						
		
		
		int remove(int mat){
			 
		}
		
		// auxiliar no metodo remove, vai 
		//retornar o endereco do anterior
		No *busca(int mat){
			
		}
		
		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;

			while (atual!=NULL){
				proximo=atual->prox;
				cout << "\n Apaga:" << atual->nome;
				free(atual);
				atual = proximo;						
			}

			inicio = atual;
		}
		
		// criar uma nova lista que seja o inverso da primeira
		void criaListaInversa(){
				
		}
		
		//inverter a propria lista
		void listaInvertida(){
				
		}
};


int main(){
   Lista *l = new Lista();

   l->adicionaAoFinal(1,"Joao");
   l->adicionaAoFinal(2,"Gabriela");
   l->adicionaAoFinal(3,"Fabiola");
   l->adicionaAoInicio(5,"Joana Oliveira");
   l->adicionaAoInicio(6,"Cristiano Oliveira");
   l->mostra();
 
  l->listaInvertida();
  l->mostra();

  return 0;
}
