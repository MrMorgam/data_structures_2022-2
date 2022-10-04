#include <iostream>
#include <ctype.h>
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

char* getPosfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha T = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            enfileira(e[i], T);
        } else if (isalpha(e[i])){
            s[j++] = e[i];

        } else if (strchr("+-/*", e[i])) {
            while(!pilhaVazia(T) && (prioridade(getTopo(T)) >= prioridade(e[i]))){
                s[j++] = desenfileira(T);
            }
            enfileira(e[i], T);
        }
        else if (e[i] == ')') {
            while(getTopo(T) != '('){
                s[j++] = desenfileira(T);
            }
            desenfileira(T);
        }
    }
    
    while(!pilhaVazia(T)){
            s[j++] = desenfileira(T);
        }
    s[j] = '\0';
    return s;
}


int main(){
    char infixa[256];
    printf("Digite uma expressao infixa: ");
    scanf("%s", &infixa);

    char *posfixa = getPosfixa(infixa);
    printf("\n%s\n", posfixa);

    return 0;
}