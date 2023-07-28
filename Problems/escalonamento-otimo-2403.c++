#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, y, k, i, cordx, cordy;

    cin >> m >> n >> x >> y >> k;

    for (i = 0; i < k; i++){
        cin >> cordx >> cordy;

        black[m*(cordx-1) + cordy] = true;
    }

    dfs(m*(x-1) + y, m, n);

    cout << cont << endl;
}