#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3; 

    cin >> n1 >> n2 >> n3;

    if (n1 == (n2 + n3) || n2 == (n1 + n3) || n3 == (n1 + n2)) cout << 1 << endl;
    else if (n1 == (n2 * n3) || n2 == (n1 * n3) || n3 == (n1 * n2)) cout << 2 << endl;
    else cout << 3 << endl;
}