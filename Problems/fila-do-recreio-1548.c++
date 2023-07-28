#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos, numAlunos, aluno, i, j, resposta;
    vector<int> v;
    vector<int> v1;

    cin >> numCasos;

    for(i = 0; i < numCasos; i++){
        cin >> numAlunos;
        resposta = 0;

        for(j = 0; j < numAlunos; j++){
            cin >> aluno;
            v.push_back(aluno);
            v1.push_back(aluno);
        }

        sort(v1.begin(), v1.end(), greater<int>());

        for(j = 0; j <= v1.size()-1; j++){
            if (v[j] == v1[j]){
                resposta++;
            }
        }

        cout << resposta << endl;

        v1.clear();
        v.clear();

    }
}