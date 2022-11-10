#include <iostream>
#include <string.h>

using namespace std;

void insere(char* x, char* v[], int n) {
    while (n > 0 && strcmp(x, v[n-1]) < 0) {
        v[n] = v[n-1];
        n--;
    }

    v[n] = x;
}

void insertion_sort(char* v[], int n) {
    for (int i = 0; i < n; i++) {
        insere(v[i], v, i);
    }
}

int main() {
    char* v[5] = {"cbd", "abc", "def", "bcd", "asd"};

    insertion_sort(v, 5);

    for (int i = 0; i < 5; i++) {
        cout << v[i] << endl;
    }    

    return 0;  
}