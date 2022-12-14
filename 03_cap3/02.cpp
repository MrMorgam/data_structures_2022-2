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

char* getPosfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha T = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            enfileira(e[i], T);
        } else if (isdigit(e[i]) || e[i]=='.'){
            s[j++] = e[i];

        } else if (strchr("+-/*", e[i])) {
            s[j++] = ' ';
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

float getResultPosfix (char *e) {

    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(isdigit(e[i])) {
            enfileira(atof(e+i), P);
            while(isdigit(e[i+1]) || e[i+1] == '.'){
                i++;
            }
        } else if (strchr("+*-/", e[i])){
            float y = desenfileira(P);
            float x = desenfileira(P);
            switch(e[i]){
                case '+': enfileira(x+y, P); break;
                case '-': enfileira(x-y, P); break;
                case '*': enfileira(x*y, P); break;
                case '/': enfileira(x/y, P); break;
            }
        }    
    }

    double z = desenfileira(P);

    return z;
}

int main(){
    char infixa[256];
    printf("Digite uma expressao infixa: ");
    scanf("%s", &infixa);

    char *posfixa = getPosfixa(infixa);
    double valor = getResultPosfix(posfixa);

    printf("\n%s\n", posfixa);
    printf("%f", valor);

    return 0;
}