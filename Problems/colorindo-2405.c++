#include <bits/stdc++.h>
using namespace std;

bool filled[50000] = {};
bool black[50000] = {}; // se colocar 10000 buga o codigo
int cont = 0;

void dfs(int s, int m, int n){ //busca em profundidade 
    if (filled[s] || black[s] || s < 1 || (s > (m*n))) return;  

    filled[s] = true;  

    cont++;

    if(s % n != 1 && s > n) dfs(s-n-1, m, n); // disgonal cima esquerda
    if(s > n) dfs(s-n, m, n); // cima
    if(s % n != 0 && s > n) dfs(s-n+1, m, n); // diagonal cima direita

    if(s % n != 0) dfs(s+1, m, n);

    if(s % n != 0 && s < m*n-n) dfs(s+n+1, m, n);
    if (s < m*n-n) dfs(s+n, m , n);
    if(s % n != 1 && s < m*n-n) dfs(s+n-1, m, n);

    if(s % n != 1) dfs(s-1, m, n);
}

int main(){
    int n, m, x, y, k, i, cordx, cordy;

    cin >> m >> n >> x >> y >> k;

    for (i = 0; i < k; i++){
        cin >> cordx >> cordy;

        black[m*(cordx-1) + cordy] = true;
    }

    dfs(m*(x-1) + y, m, n);

    cout << cont << endl;
}