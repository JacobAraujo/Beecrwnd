#include <bits/stdc++.h>
using namespace std;

const int INF = 999999;
vector<int> adj[1000];
bool visited[1000];
int cont = 0;

void dfs(int s){ //busca em profundidade 
    if (visited[s]) return;   
    visited[s] = true;  

    cont++;

    for (auto u: adj[s]){ //para cada nó adjacente a s
        dfs(u);
    }
}

bool alcanca(pair<int, int> c, pair<int, int> c1, int D){
    return((sqrt(pow(c1.first - c.first, 2) + pow(c1.second - c.second, 2))) <= D);
}

int main(){
    int N, D, i, j, x, y, con;
    vector<pair<int, int>> cord;

    cin >> N >> D;

    for (i = 0; i < N; i++){
        cin >> x >> y;

        cord.push_back({x,y});
    }

    for (i = 0; i < N; i++){ // lista adj
        for (j = 0; j < N; j++){
            if (i != j){
                if (alcanca(cord[i],cord[j], D)){
                    adj[i].push_back(j);
                }
            }
        }
    }

    dfs(0);

    if (cont == N) cout << 'S' << endl;
    else cout << 'N' << endl;
}