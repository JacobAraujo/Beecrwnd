#include <iostream>
#include <vector>
using namespace std;

// Função para calcular o toLeaf de um nó x usando lista de adjacência
int toLeaf(int node, const vector<vector<int>>& adj_list) {
    if (adj_list[node].empty()) {
        return 0; // Nó folha
    }
    int maxToLeaf = 0;
    for (int child : adj_list[node]) {
        maxToLeaf = max(maxToLeaf, toLeaf(child, adj_list));
    }
    return maxToLeaf + 1;
}

// Função para calcular o max length de um nó x usando lista de adjacência
int maxLength(int node, const vector<vector<int>>& adj_list) {
    if (adj_list[node].empty()) {
        return 0; // Nó folha
    }
    int max1 = 0, max2 = 0;
    for (int child : adj_list[node]) {
        int tl = toLeaf(child, adj_list);
        if (tl > max1) {
            max2 = max1;
            max1 = tl;
        } else if (tl > max2) {
            max2 = tl;
        }
    }
    return max1 + 1;
}

// Função para encontrar o diâmetro da árvore usando lista de adjacência
int findDiameter(const vector<vector<int>>& adj_list) {
    if (adj_list.empty()) {
        return 0;
    }
    int diameter = 0;
    for (int i = 0; i < adj_list.size(); i++) {
        diameter = max(diameter, maxLength(i, adj_list));
    }
    return diameter;
}

int main() {

}
