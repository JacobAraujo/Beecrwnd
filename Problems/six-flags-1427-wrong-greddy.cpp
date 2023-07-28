#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int>> v;
    vector<pair<int, int>> v1;

    int N, i, D, P, pont;
    bool flag = false;

    while(true){
        cin >> N >> D;

        if (N == 0)
            break;

        v.clear();
        v1.clear();

        for(i = 0; i < N; i++){
            cin >> D >> P;  

            v.push_back({D, P});
            v1.push_back({P/D, i});
        }

        sort(v1.rbegin(), v1.rend());


        pont = 0;

        while(true){
            flag = false;
            for(i = 0; i < N; i++){
                if (D > v[v1[i].second].first){
                    pont += v[v1[i].second].second; 
                    D -= v[v1[i].second].first;

                    cout << "pontuacao: " << pont << "\nTempo Restante: " << D; 

                    flag = true;
                    break;
                } 
            }

            if (!flag) break;
        }


        cout << pont << endl;
    }

    return 0;
}
