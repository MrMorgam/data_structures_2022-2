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
        No *ant;

        No(int m,char n[23]) {
            mat = m;
            strcpy(nome, n);
            prox = NULL;
            ant = NULL;
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

        void addToFinal(int m, char n[23]) {
            No *novo = new No(m, n);
   
            if (inicio != NULL) {
                fim->prox = novo;
                novo->ant = fim;
   
                fim = novo;
            } else {
                inicio = novo;
                fim = novo;
            }
   
        }

        void addToIni(int m, char n[23]) {
            No *novo = new No(m, n);

            if (inicio != NULL) {
                inicio->ant = novo;
                novo->prox = inicio;

                inicio = novo;
            } else {
                inicio = novo;
                fim = novo;
            }

        }

        void addOrd(int m, char n[23]) {
            No *novo = new No(m, n);
            No *aux = inicio;

            if (inicio != NULL) {
                if (aux->prox != NULL && aux->ant != NULL) {

                } else {
                    if (aux->mat)
                }
            } else {
                inicio = novo;
                fim = novo;
            }
        }

        void mostraIniFim() {
            if (inicio != NULL) {
                No *aux = inicio;
   
                cout << "Lista de alunos: " << endl << endl;
   
                while (aux != NULL) {
                    cout << "Matricula: " << aux->mat << endl;
                    cout << "Nome: " << aux->nome << endl << endl;
       
                    aux = aux->prox;
                }
            } else {
                cout << "Lista vazia!" << endl;
            }
        }

        void mostraFimIni() {
            if (inicio != NULL) {
                No *aux = fim;
   
                cout << "Lista de alunos: " << endl << endl;
   
                while (aux != NULL) {
                    cout << "Matricula: " << aux->mat << endl;
                    cout << "Nome: " << aux->nome << endl << endl;
       
                    aux = aux->ant;
                }
            } else {
                cout << "Lista vazia!" << endl;
            }
        }

        int removerFinal() {
            No *penultimo = fim->ant;
            int mat = fim->mat;

            penultimo->prox = NULL;
            free(fim);
            fim = penultimo;

            return mat;
        }

        int removerInicio() {
            No *segundo = inicio->prox;
            int mat = inicio->mat;

            segundo->ant = NULL;
            free(inicio);
            inicio = segundo;

            return mat;
        }

        int remover(int m) {
            No *aux = inicio;
            int mat = -1;



            while (aux != NULL) {
                if (aux->mat == m) {
                    mat = m;
                    
                    if (aux->prox != NULL) {
                        (aux->prox)->ant = aux->ant;
                    } else {
                        fim = aux->ant;
                    }
                    
                    if (aux->ant != NULL) {
                        (aux->ant)->prox = aux->prox;
                    } else {
                        inicio = aux->prox;
                    }
                    
                    free(aux);

                    break;
                }

                aux = aux->prox;
            }

            return mat;
        }
};

int main(){
    Lista *l = new Lista();

    l->addOrd(1,"Joana Oliveira");
    l->addOrd(10,"Cristiano Oliveira");
    l->mostraIniFim();
    l->addOrd(8,"Joao");
    l->addOrd(4,"Fabio");
    l->mostraIniFim();
    l->mostraFimIni();
    if (l->remover(4)==1)
        cout<<"Elemento removido!!";
    else
        cout<<"Elemento nao encontrado!!";    
    l->mostraIniFim();

    return 0;
}
