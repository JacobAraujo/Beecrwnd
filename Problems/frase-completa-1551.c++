#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, i;
    string frase;
    vector<char> v; 
    bool flag;
    int cont;

    cin >> num; 
    cin.ignore();

    for (i = 0; i < num; i++){
        getline (cin, frase);

        cont = 0;

        for (auto l: frase){
            if (isalpha(l)){
                flag = false;

                for (auto l1: v){

                    if (toupper(l) == toupper(l1)){
                        flag = true;
                        break;
                    }
                }

                if (!flag){
                    v.push_back(l);
                    cont ++;
                }
            }
        }

        if(cont == 23){
            cout << "frase completa" << endl;
        } else if ( cont >= 13) {
            cout << "frase quase completa" << endl;
        } else {
            cout << "frase mal elaborada" << endl;
        }

        v.clear();
    }
}
