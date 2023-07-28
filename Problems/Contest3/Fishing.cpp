#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <pair<int,int>> v;
    vector <int> v1;

    double net, num, i, j, x, y, maior; 
    cin >> net >> num;

    for(i = 0; i < num; i++){
        cin >> x >> y;

        for (j = 0; j < v.size(); j++){
            if (x > (v[j].first - net/2) and (x < v[j].first + net/2) and (y > v[j].second - net/2) and (y < v[j].second + net/2)){
                v1[j]++;
                cout << v[j].first << ' ' << v[j].second << " alcanca: " << x << ' ' << j << ' ' << endl;
            }      
        }

        v.push_back({x,y});
        v1.push_back(0);
    }

    maior = 0;
    for (auto i: v1){
        if (i >= maior) maior = i;
    }

    cout << maior + 1;

}