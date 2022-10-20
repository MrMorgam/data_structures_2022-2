#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct no{
	int matricula;
	string nome;
} Lista; 

Lista turma[5];
int topo = -1;

void inserir(Lista a){
	int qtdAlunos = sizeof(turma) / sizeof(turma[0]);
	if (topo < qtdAlunos - 1) {
		turma[++topo] = a;
	} else {
		cout << "Turma cheia!" << endl;
	}
}

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

void mostrar(int posicao) {
	int indice = posicao - 1;

	if (indice < topo + 1) {
		cout << "Matrícula: " << turma[posicao-1].matricula << endl;
		cout << "Aluno: " << turma[posicao-1].nome << endl;
	} else {
		cout << "Posição inválida!" << endl;
	}
}

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

void remover00(int posicao) {
	int indice = posicao - 1;

	if (indice < topo + 1) {
		turma[indice] = turma[topo--];
	} else {
		cout << "Posição inválida!" << endl;
	}
}

void remover01(int posicao) {
	int indice = posicao - 1;

	if (indice < topo + 1) {
		topo--;

		for (int i = indice; i < topo + 1; i++) {
			Lista aux = turma[i+1];
			turma[i] = aux;
		}
	} else {
		cout << "Posição inválida!" << endl;
	}
}

void exibirAlunos() {
	cout << "Alunos da turma: " << endl << endl;
	
	for (int i = 0; i < topo + 1; i++) {
		cout << "Aluno " << i + 1 << endl;
		mostrar(i+1);
		cout << endl;
	}
}

int main() {
	Lista joao;
	Lista maria;
	Lista jose;
	Lista ana;
	Lista pedro;

	joao.matricula = 12345;
	joao.nome = "João da Silva";

	maria.matricula = 54321;
	maria.nome = "Maria de Sousa";

	jose.matricula = 40028;
	jose.nome = "José Ferreira";

	ana.matricula = 89222;
	ana.nome = "Ana Pereira";

	pedro.matricula = 22212;
	pedro.nome = "Pedro Sampaio";

	inserir(joao);
	inserir(maria);
	inserir(jose);
	inserir(ana);
	inserir(pedro);

	//inserir(pedro);
	//cout << endl;

	//cout << procurar(40028) << endl;
	//cout << procurar(66666) << endl;

	//cout << endl;
	//mostrar(3);
	//cout << endl;
	//mostrar(5);
	//cout << endl;
	//mostrar(6);
	//cout << endl;

	//consultar(40028);
	//cout << endl;
	//consultar(66666);

	//cout << endl;
	//exibirAlunos();

	//remover00(1);
	//remover00(5);

	//cout << endl;
	//exibirAlunos();

	//remover01(2);
	//remover01(4);
	//cout << endl;

	exibirAlunos();
		
	return 0;
}