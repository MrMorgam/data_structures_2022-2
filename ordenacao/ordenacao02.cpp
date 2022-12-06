#include<stdio.h>
#include<iostream>
#define troca(a, b) { int x = a; a = b; b = x; }

using namespace std;

int particiona (int v[], int inicio, int fim) {
    int x = v[inicio];
    inicio--;
    fim++;

   while(inicio < fim){
      do {
         fim--; 
      } while(v[fim] > x);
      
      do { 
         inicio++; 
      } while(v[inicio]<x);
        
      if (inicio < fim) {
         troca(v[inicio], v[fim]);
      }
   }

   return fim;
}

void quick_sort(int v[10], int inicio, int fim){
   if(inicio >= fim) {
      return;
   }

   int meio = particiona(v, inicio, fim);

   quick_sort(v, inicio, meio);
   quick_sort(v, meio + 1, fim);
}

int main(){
   int v[6] = {7, 9, 4, 3, 6, 1};
   int i;

   quick_sort(v, 0, 5);

   printf("Vetor ordenado: ");
   for(i = 0; i <= 5; i++){
      printf("%d ", v[i]);
   }
   printf("\n");   

   return 0;
}