#include <iostream>
#include <string.h>
#include "../pilhas/pilha1.h"

using namespace std;


int prioridade (char o) {
    switch (o)
    {
    case '(': return 0;
    case '+': return 1;
    case '-': return 1;
    case '*': return 2;
    case '/': return 2;
    }
    return -1;
}

int getResultPosfix (char *e) {

    Pilha P = pilha(256);
    for(int i = 0; e[i]; i++){
        if(isdigit(e[i]))
            push(e[i] - '0', P); 
        else {
            int y = pop(P);
            int x = pop(P);
            switch(e[i]){
                case '+': push(x+y, P); break;
                case '-': push(x-y, P); break;
                case '*': push(x*y, P); break;
                case '/': push(x/y, P); break;
            }
        }    
    }

    int z = pop(P);

    return z;
}

char* getPosfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha T = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            push(e[i], T);
        } else if (isdigit(e[i])){
            s[j++] = e[i];

        } else if (strchr("+-/*", e[i])) {
            while(!pilhaVazia(T) && (prioridade(getTopo(T)) >= prioridade(e[i]))){
                s[j++] = pop(T);
            }
            push(e[i], T);
        }
        else if (e[i] == ')') {
            while(getTopo(T) != '('){
                s[j++] = pop(T);
            }
            pop(T);
        }
    }
    
    while(!pilhaVazia(T)){
            s[j++] = pop(T);
        }
    s[j] = '\0';

    return s;
}


int main(){

    char infixa[256];
    printf("Digite uma expressao infixa: ");
    scanf("%s", &infixa);


    char *posfixa = getPosfixa(infixa);
    int valor = getResultPosfix(posfixa);

    printf("\n%s\n", posfixa);

    printf("%d", valor);

    return 0;
}