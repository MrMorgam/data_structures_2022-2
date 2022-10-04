#include <stdio.h>
#include <ctype.h>
#include "../pilhas/pilha1.h"
#include "../filas/fila1.h"


int main() {

    char s[256];
    Fila f1 = fila(256);
    Pilha p1 = pilha(256);

    printf("\nFrase? ");
    gets(s);
    
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            enfileira(s[i], f1);
            empilha(s[i], p1);
        }
    }

    while (!filaVazia(f1) && toupper(desenfileira(f1)) == toupper(desempilha(p1)));
    
	if (filaVazia(f1)) {
    	printf("A frase e palindroma");	
	} else {
		printf("A frase nao e palindroma");	
	}
	
	destroiFila(&f1);
	destroiPilha(&p1);

    return 0;
}