#include <iostream>
#include "../pilhas/pilha1.h"

using namespace std;


int main(){

    Pilha p = pilha(5);
    char s[11];

    char* palavra;

    for(int i = 1; i <= 3; i++) {
        printf("? ");
        cin >> s;
        
        push(s, p);
    }

    while(!pilhaVazia(p)){
        cout << pop(p) << endl;
    }

    return 0;

}