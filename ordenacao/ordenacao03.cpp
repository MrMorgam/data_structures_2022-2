#include<stdio.h>
#include<iostream>

using namespace std;

void intercala(int v[], int inicio, int meio, int fim) {
   int *aux = (int*)malloc((fim-inicio+1)*sizeof(int));
   
   if(aux == NULL) {
      abort();
   }

   int i = inicio;
   int j = meio + 1; 
   int k = 0;

   while (i <= meio && j <= fim){
      if(v[i]< v[j]) {
         aux[k++] = v[i++];
      } else {
         aux[k++]= v[j++]; 
      }
   }

   while (i <= meio){
      aux[k++] = v[i++];
   }
   
   while (j<=fim) {
      aux[k++] = v[j++];
   }

   for (k=0; k <= fim - inicio; k++){
      v[inicio + k] =  aux[k];
   }

   free(aux);
}

void merge_sort(int v[],int inicio, int fim){
   if (inicio == fim) {
      return;
   }

   int meio = (inicio + fim) / 2;

   merge_sort(v, inicio, meio);
   merge_sort(v, meio+1, fim);
   intercala(v, inicio, meio, fim);
}

int main() {
   int v[6] = {7, 9, 4, 3, 6, 1};
   int i;

   merge_sort(v, 0, 5);

   printf("Vetor ordenado: ");
   for (i = 0; i <= 5; i++) {
      printf("%d ", v[i]);
   }
   printf("\n");

   return 0;
}