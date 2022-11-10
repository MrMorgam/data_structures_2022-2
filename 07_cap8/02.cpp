#include <iostream>

using namespace std;

void insere(int x, int v[], int n) {
    while (n > 0 && x < v[n-1]) {
        v[n] = v[n-1];
        n--;
    }

    v[n] = x;
}

void insertion_sort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        insere(v[i], v, i);
    }
}

int main() {
    int v[5] = {8, 2, 5, 3, 1};

    insertion_sort(v, 5);

    for (int i = 0; i < 5; i++) {
        cout << v[i] << endl;
    }    

    return 0;  
}