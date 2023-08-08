#include <bits/stdc++.h>
using namespace std;

// pre-ordem
void preOrdem(int v[], int n, int i){
    if (i >= n) return;

    cout << v[i] << " ";
    preOrdem(v, n, 2*i + 1);
    preOrdem(v, n, 2*i + 2);
}

// em-ordem
void emOrdem(int v[], int n, int i){
    if (i >= n) return;

    emOrdem(v, n, 2*i + 1);
    cout << v[i] << " ";
    emOrdem(v, n, 2*i + 2);
}

// pos-ordem
void posOrdem(int v[], int n, int i){
    if (i >= n) return;

    posOrdem(v, n, 2*i + 1);
    posOrdem(v, n, 2*i + 2);
    cout << v[i] << " ";
}

int main(){
    // cria a arvore binaria
    int v[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "Pre-ordem: ";
    preOrdem(v, 7, 0);
    cout << endl;

    cout << "Em-ordem: ";
    emOrdem(v, 7, 0);
    cout << endl;

    cout << "Pos-ordem: ";
    posOrdem(v, 7, 0);
    cout << endl;
    
}