#include <iostream>
#define troca(a, b) { int x = a; a = b; b = x; }

using namespace std;

void empurra(int v[], int n) {
    for (int i = 0; i < n; i++) {
        if (v[i] > v[i+1]) {
            troca(v[i], v[i+1]);
        }
    }
}

void bubble_sort(int v[], int n) {
    for (int i = 1; i <= n - 2; i++) {
        for (int j = 0; j < n - (i - 1); j++) {
            if (v[j] > v[j+1]) {
                troca(v[j], v[j+1]);
            }
        }
    }
}

int main() {
    int v[5] = {1, 8, 5, 2, 3};

    empurra(v, 5);

    bubble_sort(v, 5);

    for (int i = 0; i < 5; i++) {
        cout << v[i] << endl;
    }    

    return 0;  
}