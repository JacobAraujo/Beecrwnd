#include <iostream>
#include <vector>

using namespace std;

vector<int> encontrarSomasPesos(vector<int>& pesos) {
    int n = pesos.size();
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += pesos[i];
    }

    vector<vector<bool>> matriz(n + 1, vector<bool>(s + 1, false));
    for (int i = 0; i <= n; i++) {
        matriz[i][0] = true;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (pesos[i - 1] <= j) {
                matriz[i][j] = matriz[i - 1][j] || matriz[i - 1][j - pesos[i - 1]];
            } else {
                matriz[i][j] = matriz[i - 1][j];
            }
        }
    }

    vector<int> somasPossiveis;
    for (int j = 1; j <= s; j++) {
        if (matriz[n][j]) {
            somasPossiveis.push_back(j);
        }
    }

    return somasPossiveis;
}

int main() {
    vector<int> pesos = {1, 3, 3, 5};
    vector<int> somas = encontrarSomasPesos(pesos);

    cout << "Somas possiveis: ";
    for (int i = 0; i < somas.size(); i++) {
        cout << somas[i] << " ";
    }
    cout << endl;

    return 0;
}
