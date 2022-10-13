#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct aluno{
	int mat;
	string nome;
} Aluno; 

Aluno turma[5];
int topo = -1;

void inserir(Aluno a){
	int qtdAlunos = sizeof(turma) / sizeof(turma[0]);
	if (topo < qtdAlunos - 1) {
		turma[++topo] = a;
	} else {
		cout << "Turma cheia!" << endl;
	}
}

// Retorna a posicao do elemento procurado
int procurar(int mat) {	
	int pos = -1;

	for (int i = 0; i < topo + 1; i++) {
		if (mat == turma[i].mat) {
			pos = i;
			break;
		}
	}

	return pos + 1;
}

// Recebe a posicao e imprime o elemento na tela.
void mostrar(int pos) {
	if (pos - 1 < topo + 1) {
		cout << "Matrícula: " << turma[pos-1].mat << endl;
		cout << "Aluno: " << turma[pos-1].nome << endl;
	} else {
		cout << "Posição inválida!" << endl;
	}
}

// Procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa que ele nao existe).
int consultar(int mat) {
	for (int i = 0; i < topo + 1; i++) {
		if (mat == turma[i].mat) {
			mostrar(i+1);
			return 1;
		}
	}

	cout << "Matrícula inexistente!" << endl;
	return 0;
}

// Estratégia 1: colocar o último elemento da lista na posição do elemento removido.
void remover00(int pos) {
	// A fazer
}

// Estratégia 2: mover todos os elementos que estão após o elemento que deve ser removido uma posição a frente.
void remover01(int pos) {
	// A fazer
}

int main() {
	Aluno joao;
	Aluno maria;
	Aluno jose;
	Aluno ana;
	Aluno pedro;

	joao.mat = 12345;
	joao.nome = "João da Silva";

	maria.mat = 54321;
	maria.nome = "Maria de Sousa";

	jose.mat = 40028;
	jose.nome = "José Ferreira";

	ana.mat = 89223;
	ana.nome = "Ana Pereira";

	pedro.mat = 22212;
	pedro.nome = "Pedro Sampaio";

	inserir(joao);
	inserir(maria);
	inserir(jose);
	inserir(ana);
	inserir(pedro);

	inserir(pedro); // Tentando adicionar elemento após o vetor estar cheio
	cout << endl;

	cout << procurar(40028) << endl;
	cout << procurar(66666) << endl; // Tentando procurar uma matrícula que não existe

	cout << endl;
	mostrar(3);
	cout << endl;
	mostrar(5);
	cout << endl;
	mostrar(6); // Tentando mostrar aluno em posição que não existe
	cout << endl;

	consultar(40028);
	cout << endl;
	consultar(66666);
	cout << endl;

	// Mostrar os alunos da turma
	cout << "Alunos da turma: " << endl << endl;
	
	for (int i = 0; i < topo + 1; i++) {
		cout << "Aluno " << i + 1 << endl;
		mostrar(i+1);
		cout << endl;
	}
		
	return 0;
}