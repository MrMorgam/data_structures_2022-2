#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define trocaInt(a, b) { int x = a; a = b; b = x; }
#define trocaStr(a, b) { string x = a; a = b; b = x; }

using namespace std;

typedef struct aluno {
	int matricula;
	string nome;
} Aluno;


// Insertion sort

void insere(int x, Aluno v[], int n, string nome){
	while(n > 0 && x < v[n-1].matricula){
		v[n].matricula = v[n-1].matricula;
		v[n].nome = v[n-1].nome;
		n--;
	}
	v[n].matricula = x;
	v[n].nome = nome;
}

void insertion_sort(Aluno v[], int tam){
	for (int i = 0; i < tam; i++) {
		insere(v[i].matricula, v, i, v[i].nome);
	}
}

// Selection sort

int seleciona(Aluno v[], int n){
	int i = 0;
	for (int j = 1; j < n; j++){
		if(v[i].nome < v[j].nome) {
			i = j;
		}
	}
	return i;	
}


void selection_sort(Aluno v[],int n){
	while (n > 1) {
		trocaInt(v[seleciona(v,n)].matricula, v[n-1].matricula);
		trocaStr(v[seleciona(v,n)].nome, v[n-1].nome);
		n--;
	}
}

// Bubble_sort

void bubble_sort(Aluno v[],int n){
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (v[j].matricula > v[j+1].matricula) {
				trocaInt(v[j].matricula, v[j+1].matricula);
				trocaStr(v[j].nome, v[j+1].nome);
			}
		}
	}
}

Aluno myarray[20];
	
int main () {
	 //1:  A. leia os valores e adicione no vetor de dados
	 // ordene pelo campo matricula
	 	//   B. Ordene por:
		//   c. Insercao
	// mostre o resultado ordenado

	myarray[0].nome = "joao";
	myarray[0].matricula = 456;

	myarray[1].nome = "maria";
	myarray[1].matricula = 123;

	myarray[2].nome = "jose";
	myarray[2].matricula = 678;

	myarray[3].nome = "lucas";
	myarray[3].matricula = 343;

	myarray[4].nome = "ana";
	myarray[4].matricula = 163;

	insertion_sort(myarray, 5);

	for (int i = 0; i < 5; i++) {
		cout << "Aluno(a): " << myarray[i].nome << " | Matrícula: " << myarray[i].matricula << endl;
	}

	cout << endl;
	
	// 2: A. leia os valores e adicione no vetor de dados
	// ordene pelo campo nome 
		//  B. Ordene por:
	//  c. selection_sort
	// mostre o resultado ordenado

	selection_sort(myarray, 5);

	for (int i = 0; i < 5; i++) {
		cout << "Aluno(a): " << myarray[i].nome << " | Matrícula: " << myarray[i].matricula << endl;
	}

	cout << endl;
	
	// 3: A. leia os valores e adicione no vetor de dados
	// ordene pelo campo matricula
	//  B. Ordene por:
	//  c. bubble_sort
	// mostre o resultado ordenado

	bubble_sort(myarray, 5);

	for (int i = 0; i < 5; i++) {
		cout << "Aluno(a): " << myarray[i].nome << " | Matrícula: " << myarray[i].matricula << endl;
	}

	cout << endl;
	
	return 0;
}