#include <iostream>
#include <string.h>
#include "../pilhas/pilha1.h"

using namespace std;


int prioridade (char o) {
    switch (o)
    {
    case '~': return 3;
    case '&': return 2;
    case '|': return 1;
    }
    return -1;
}

bool ehOperando(char o) {
    return (o == 'V' || o == 'F');
}

char getNegacao(char o) {
    if(o == 'V') return 'F';
    else if (o == 'F') return 'V';
}

char getAnd(char o, char p){
    if(o == 'V' && p == 'V') return 'V';
    else return 'F';
}

char getOr(char o, char p){
    if(o == 'F' && p == 'F') return 'F';
    else return 'V';
}


char* getPosfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha T = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            push(e[i], T);
        } else if (ehOperando(e[i])){
            s[j++] = e[i];

        } else if (strchr("~&|", e[i])) {
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

char getResultPosfix (char *e) {

    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(ehOperando(e[i])) {
            push(e[i], P);

        } else if (e[i] == '~'){
            char v = pop(P);
            push(getNegacao(v), P);

        } else if (strchr("&|", e[i])){
            char y = pop(P);
            char x = pop(P);
            switch(e[i]){
                case '&': push(getAnd(y, x), P); break;
                case '|': push(getOr(y, x), P); break;
            }
        }    
    }

    double z = pop(P);

    return z;
}

int main(){
    char infixa[256];
    printf("Digite uma expressao infixa: ");
    scanf("%s", &infixa);

    char *posfixa = getPosfixa(infixa);
    char valor = getResultPosfix(posfixa);

    printf("\n%s\n", posfixa);
    printf("%c", valor);

    return 0;
}