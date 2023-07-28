#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos, i, j, numNumeros, num, sorteado, menor, menorIndice;
    menor =  INT_MAX;

    cin >> numCasos;

    for(i = 0 ; i < numCasos ; i++){
        cin >> numNumeros >> sorteado;
        for (j = 0 ; j < numNumeros ; j++){
            cin >> num;
            if (abs(sorteado - num) < menor){
                menor = abs(sorteado - num);
                menorIndice = j + 1;
            }
        }
        cout << menorIndice << "\n";
        menor = INT_MAX;
    }
}