#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

bool ready[1300][1300][100];
int value[1300][1300][100];
int pontos;
int saldo;

int N, D, best, j;

int calculaPontos(int fez, int levou, int golsComprados) {
    saldo = fez - levou + golsComprados;

    if (saldo > 0) pontos = 3;
    if (saldo == 0) pontos = 1;
    if (saldo < 0) pontos = 0;

    return pontos;
}

int solve(int i, int capacidade, int golsComprados) {
    if (N == i) return 0;

    auto start_time = chrono::high_resolution_clock::now(); // Measure start time

    if (ready[i][capacidade][golsComprados]) {
        auto end_time = chrono::high_resolution_clock::now(); // Measure end time
        auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        cout << "Time taken for reusing ready[" << i << "][" << capacidade << "][" << golsComprados << "]: " << duration << " microseconds" << endl;
        return value[i][capacidade][golsComprados];
    }

    int compra = 0;
    int naoCompra = solve(i + 1, capacidade, 0) + calculaPontos(v[i].first, v[i].second, 0);
    int melhorCompra = 0;
    int numGols;

    for (int j = 1; j <= 100; j++) {
        if (capacidade < j) break;

        compra = solve(i + 1, capacidade - j, j) + calculaPontos(v[i].first, v[i].second, j);

        if (compra > melhorCompra) {
            numGols = j;
            melhorCompra = compra;
        }
    }

    auto end_time = chrono::high_resolution_clock::now(); // Measure end time
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    cout << "Time taken for solve(" << i << ", " << capacidade << ", " << golsComprados << "): " << duration << " microseconds" << endl;

    best = max(melhorCompra, naoCompra);

    value[i][capacidade][numGols] = best;
    ready[i][capacidade][numGols] = true;

    return best;
}

int main() {

    int fez, levou;

    while (true) {
        cin >> N >> D;

        if (N == 0) break;

        for (int i = 0; i < N; i++) {
            cin >> fez >> levou;

            v.emplace_back(fez, levou);
        }

        auto start_time = chrono::high_resolution_clock::now(); // Measure start time

        for (int i = 0; i <= N; i++) {
            for (int j = 0; j <= D; j++) {
                for (int k = 0; k <= 100; k++)
                    ready[i][j][k] = false;
            }
        }

        auto end_time = chrono::high_resolution_clock::now(); // Measure end time
        auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        cout << "Time taken for reinitializing ready array: " << duration << " microseconds" << endl;

        v.clear();

        start_time = chrono::high_resolution_clock::now(); // Measure start time
        cout << solve(0, D, 0) << endl;
        end_time = chrono::high_resolution_clock::now(); // Measure end time
        duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        cout << "Total time taken for solve: " << duration << " microseconds" << endl;
    }

    return 0;
}
