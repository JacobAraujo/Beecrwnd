#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i, j, numPerguntas, num;
    int flag = 0;
    vector<pair<int,int>> perguntas;
    numPerguntas = 0;
    n = 1;
    k = 0;
    while(n != 0 || k != 0){
        cin >> n >> k;
        for(i = 0 ; i < n ; i++){
            cin >> num;
            for (j = 0 ; j < perguntas.size() ; j++) {
                cout << "\nfirst: " << perguntas[j].first << "\nNum: " << num;
                if(perguntas[j].first == num){
                    perguntas[j].second ++;
                    flag = 1;
                    break;
                }
            } 
            if (flag == 0) {
                pair<int, int> frequencia;
                frequencia.first = num;
                frequencia.second = 0;
                perguntas.push_back(frequencia);
            } else {
                flag = 0;
            }            
        }
        for (i = 0 ; i < perguntas.size() ; i++){
            if(perguntas[i].second >= k){
                numPerguntas ++;
            }
        }
        cout << numPerguntas << "\n";
        perguntas.clear();
    }
}