#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;

bool ready[100][100];
int value[100][100];

int N, D, best;

int solve(int i, int capacidade){
    if (N == i) return 0;

    if (ready[i][capacidade]) return value[i][capacidade];

    int pega = 0;
    int naoPega = solve(i + 1, capacidade);
    if (capacidade >= v[i].first) pega = solve(i+1, capacidade - v[i].first) + v[i].second;

    best = max(pega, naoPega);
    
    value[i][capacidade] = best;
    ready[i][capacidade] = true;

    return best;
}

int main(){

    int d, P, inst;

    inst = 1;

    while(true){
        cin >> N >> D;

        if (N == 0) break;

        for(int i = 0; i < N; i++){
            cin >> d >> P;  

            v.emplace_back(d, P);
        }

        for (int i = 0; i <= N; i++){
            for(int j = 0; j <= D; j++){
                ready[i][j] = false;
            }
        }

        v.clear();
        cout << solve(0, D) << endl;
    }

    return 0;
}
