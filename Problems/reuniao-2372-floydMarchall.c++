#include <bits/stdc++.h>
using namespace std;

const int INF = 999999;

int main(){
    int i, j, nc, ne, u, v, dist, k, maior, menorDist;

    cin >> nc >> ne;

    int distance[nc][nc];

    // matriz de adjacencia
    int g[nc][nc];

    for (i = 0; i < nc; i++){
        for (j = 0; j < nc; j++){
            g[i][j] = -1;
        }
    }


    for (i = 0; i < ne; i++){
        cin >> u >> v >> dist;

        g[u][v] = dist;
        g[v][u] = dist;
    }

    // inicializa matriz de distancias com as distancias diretas, as distancias para o proprio vertice e INF onde não tem distancia direta
    for (i = 0; i < nc; i++){
        for (j = 0; j < nc; j++){
            if (i == j) distance[i][j] = 0;
            else if (g[i][j] != -1) distance[i][j] = g[i][j]; 
            else distance[i][j] = INF;
        }
    }

    // calcula todas as distancias
    for (k = 0; k < nc; k++){
        for (i = 0; i < nc; i++){
            for (j = 0; j < nc; j++){
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
            } 
        }
    }

    menorDist = INF;
    for (j = 0; j < nc; j++){
        maior = 0;
        for (i = 0; i < nc; i++){
            if (distance[i][j] >= maior){
                maior = distance[i][j];
            }
        }
        if (maior < menorDist){
            menorDist = maior;
        }
    }

    cout << menorDist << endl;

    return 0;

}