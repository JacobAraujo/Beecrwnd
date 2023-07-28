#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos, i;
    double L, b, B, H, h, v, N;

    cin >> numCasos;

    for (i = 0; i < numCasos; i++){
        cin >> N >> L;
        cin >> b >> B >> H;

        v = L/N;

        h = (3*v)/(M_PI * (pow(b,  2) + pow(B, 2) + b*B));

        if (h > H){
            h = H;
        }

        cout << fixed << setprecision(2) << h << endl;
    }
}

/*2
1 200
5 6 8
2 350
3 3 16*/

// primeiro caso da errado e o segundo da certo nao sei porque