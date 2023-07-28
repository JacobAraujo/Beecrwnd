#include <bits/stdc++.h>
using namespace std;

// ajeitar e pensar sobre o caso de incrementar em um navio que ja foi destruido antes

bool visited[100][100] = {};
vector<pair<int,int>> visitedV;
bool status;

void dfs(int x, int y, int m, int n, vector<string> tab){ //busca em profundidade 
    if (tab[x][y] == '.' || visited[x][y] || !status) return;   

    visited[x][y] = true; 
    visitedV.push_back({x,y}); 

    if (tab[x][y] == '#'){
        status = false;
        return;
    }

    if (x != 0){
        dfs(x-1, y, m, n, tab);
    } 
    if (x != m-1){
        dfs(x+1, y, m, n, tab);
    }
    if (y != 0){
        dfs(x, y-1, m, n, tab);
    }
    if (y != n-1){
        dfs(x, y+1, m, n, tab);
    }
}

int main(){
    int n, m, i, j, num, x, y, k;
    int cont = 0;
    string np;

    vector<string> tab;

    cin >> m >> n;

    for (i = 0; i < m; i++){
        cin >> np;
        tab.push_back(np);
    }

    cin >> num;

    for (i = 0; i < num; i++){
        cin >> x >> y;
        x--;
        y--;

        if (tab[x][y] == '#' && (((x != 0) &&(tab[x-1][y] == 'D')) || ((x != m-1) && (tab[x+1][y] == 'D')) || ((y != 0) && (tab[x][y-1] == 'D')) || ((y != n-1) && (tab[x][y+1] == 'D')))){

            tab[x][y] = 'D';
            status = true;
            dfs(x, y, m, n, tab);

            if (status){
                cont++;
            }

            for(auto k: visitedV){
                visited[k.first][k.second] = false;
            }

            visitedV.clear();

        } else if (tab[x][y] == '#' && (((x != 0) &&(tab[x-1][y] == '#')) || ((x != m-1) && (tab[x+1][y] == '#')) || ((y != 0) && (tab[x][y-1] == '#')) || ((y != n-1) && (tab[x][y+1] == '#')))){
            tab[x][y] = 'D';
        } else if (tab[x][y] == '#'){
            cont++;
        }

        


    }

    cout << cont << endl;
}
