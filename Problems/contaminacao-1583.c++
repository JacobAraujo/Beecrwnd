    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int N, M, i, j;
        string linha;
        bool flag;
        
        vector<pair<int,int>> v;

        while(true){

            cin >> N >> M;

            if (N == 0 && M == 0){
                break;
            }

            char matriz[N][M];

            for (i = 0; i < N; i++){
                cin >> linha;
                for(j = 0; j < linha.length(); j++){
                    matriz[i][j] = linha[j];
                }
            }

            for (i = 0; i < N; i++){
                for (j = 0; j < M; j++){
                    if (matriz[i][j] == 'T'){
                        v.push_back(make_pair(i, j));
                    }          
                }
            }

            while(true){
                flag = false;
                for (auto par: v){
                    // cout << par.first << " " << par.second << " ";
                    if (matriz[par.first][par.second] == 'T'){
                        if(matriz[max(par.first+1, M-1)][par.second] == 'A'){
                            matriz[max(par.first+1, N-1)][par.second] = 'T';
                            v.push_back(make_pair(max(par.first+1, N-1), par.second));
                            flag = true;
                        } 
                        if (matriz[min(par.first-1, 0)][par.second] == 'A'){
                            matriz[min(par.first-1, 0)][par.second] = 'T';
                            v.push_back(make_pair(min(par.first-1, 0), par.second));
                            flag = true;
                        }
                        if (matriz[par.first][max(par.second+1, M-1)] == 'A'){
                            matriz[par.first][max(par.second+1, M-1)] = 'T';
                            v.push_back(make_pair(par.first, max(par.second+1, M-1)));
                            flag = true;
                        }
                        if (matriz[i][min(j-1, 0)] == 'A'){
                            matriz[i][min(j-1, 0)] = 'T';
                            v.push_back(make_pair(i, min(j-1, 0)));
                            flag = true;
                        } 
                    }                                                  
                }
                if (!flag){
                    break;
                }
            }


            for (i = 0; i < N; i++){
                for (j = 0; j < M; j++){
                    cout << matriz[i][j];                
                }
                cout << endl;
            } 
        }
    }
