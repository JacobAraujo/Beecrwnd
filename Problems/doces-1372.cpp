#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1003;

int main() {
    int M, N;

    while (cin >> M >> N && M != 0 && N != 0) {
        vector<vector<int>> boxes(M, vector<int>(N));
        vector<vector<int>> dp(M, vector<int>(N, 0));

        // Leitura das caixas
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> boxes[i][j];
            }
        }

        // Preenchimento da matriz dp (programação dinâmica)
        for (int i = M - 1; i >= 0; --i) {
            for (int j = 0; j < N; ++j) {
                dp[i][j] = boxes[i][j];
                if (i + 1 < M) {
                    dp[i][j] += dp[i + 1][j];
                }
                if (i + 2 < M) {
                    dp[i][j] = max(dp[i][j], dp[i + 2][j]);
                }
                if (j - 1 >= 0) {
                    dp[i][j] = max(dp[i][j], dp[i][j - 1]);
                }
                if (j + 1 < N) {
                    dp[i][j] = max(dp[i][j], dp[i][j + 1]);
                }
            }
        }

        // Encontrando a resposta (maior valor na primeira linha da matriz dp)
        int max_candies = 0;
        for (int j = 0; j < N; ++j) {
            max_candies = max(max_candies, dp[0][j]);
        }

        // Imprimindo a resposta para o caso de teste atual
        cout << max_candies << endl;
    }

    return 0;
}
