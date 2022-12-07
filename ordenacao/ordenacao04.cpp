#include<stdio.h>
#include<iostream>
#include <string.h>
#define troca(a, b) { int x = a; a = b; b = x; }

using namespace std;

void bubble_sort(int v[],int n){
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (v[j] > v[j+1]) {
				troca(v[j], v[j+1]);
			}
		}
	}
}

int pesquisa_linear(int x, int v[], int n) {
   for (int i = 0; i < n; i++) {
      if (x == v[i]) {
         return 1;
      }
   }
   
   return 0;
}

int pesquisa_binaria(int x, int v[], int n) {
   int p = 0;
   int u = n-1;

   while (p <= u) {
      int m = (p + u) / 2;

      if (x == v[m]) {
         return 1;
      }

      if (x < v[m]) {
         u = m - 1;
      } else {
         p = m + 1;
      }
   }

   return 0;
}

int main(){
   // A. Leia os valores atrav�s do teclado
   // B. Armazene os valores no vetor de dados
   // C. leia o valor que deseja procurar
   // D. Aplique a pesquisa linear
   // E. Apresente o resultado
   // F. Aplique a pesquisa bin�ria
   // G. Apresente o resultado

   int n;

   cout << "Digite o tamanho do vetor: ";
   cin >> n;

   int v[n];

   for (int i = 0; i < n; i++) {
      cout << "v[" << i << "] = ";
      cin >> v[i];
   }

   int x = 4;

   cout << "Resultado da pesquisa linear:" << endl;

   if (pesquisa_linear(x, v, n)) {
      cout << "O número " << x << " foi encontrado na lista" << endl;
   } else {
      cout << "O número " << x << " não foi encontrado na lista" << endl;
   }



   cout << "Resultado da pesquisa binária:" << endl;

   bubble_sort(v, n);

   if (pesquisa_binaria(x, v, n)) {
      cout << "O número " << x << " foi encontrado na lista" << endl;
   } else {
      cout << "O número " << x << " não foi encontrado na lista" << endl;
   }

}


