#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct aluno{
	int matricula;
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
int procurar(int matricula) {	
	int posicao = 0;

	for (int i = 0; i < topo + 1; i++) {
		if (matricula == turma[i].matricula) {
			posicao = i + 1;
			break;
		}
	}

	return posicao;
}

// Recebe a posicao e imprime o elemento na tela.
void mostrar(int posicao) {
	int indice = posicao - 1;

	if (indice < topo + 1) {
		cout << "Matrícula: " << turma[posicao-1].matricula << endl;
		cout << "Aluno: " << turma[posicao-1].nome << endl;
	} else {
		cout << "Posição inválida!" << endl;
	}
}

// Procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa que ele nao existe).
int consultar(int matricula) {
	for (int i = 0; i < topo + 1; i++) {
		if (matricula == turma[i].matricula) {
			mostrar(i+1);
			return 1;
		}
	}

	cout << "Matrícula inexistente!" << endl;
	return 0;
}

// Estratégia 1: colocar o último elemento da lista na posição do elemento removido.
void remover00(int posicao) {
	int indice = posicao - 1;

	if (indice < topo + 1) {
		turma[posicao] = turma.[topo];
		turma[topo] = NULL; 

	} else {
		cout << "Posição inválida" << endl;
	}
}

// Estratégia 2: mover todos os elementos que estão após o elemento que deve ser removido uma posição a frente.
void remover01(int posicao) {
	// A fazer
}

int main() {
	Aluno joao;
	Aluno maria;
	Aluno jose;
	Aluno ana;
	Aluno pedro;

	joao.matricula = 12345;
	joao.nome = "João da Silva";

	maria.matricula = 54321;
	maria.nome = "Maria de Sousa";

	jose.matricula = 40028;
	jose.nome = "José Ferreira";

	ana.matricula = 89223;
	ana.nome = "Ana Pereira";

	pedro.matricula = 22212;
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

	remover00(1);
	remover00(6);

	// Mostrar os alunos da turma
	cout << "Alunos da turma: " << endl << endl;
	
	for (int i = 0; i < topo + 1; i++) {
		cout << "Aluno " << i + 1 << endl;
		mostrar(i+1);
		cout << endl;
	}
		
	return 0;
}