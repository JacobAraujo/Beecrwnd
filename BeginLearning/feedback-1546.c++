#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos, numCasosDia, feedback, i, j;
    vector<string> v;

    v.push_back("Rolien");
    v.push_back("Naej");
    v.push_back("Elehcim");
    v.push_back("Odranoel");

    cin >> numCasos;

    for(i = 0 ; i < numCasos ; i++){
        cin >> numCasosDia;

        for(j = 0 ; j < numCasosDia ; j++){
            cin >> feedback;
            cout << v[feedback-1] << "\n";
        }
    }

}