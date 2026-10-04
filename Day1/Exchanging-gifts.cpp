#include <iostream>
#include <vector>
using namespace std;
void find_youngest_member(int n, int m, std::vector<std::pair<int, int>> &gifts) {
    vector<int> in_degree(n + 1, 0);
    vector<int> out_degree(n + 1, 0);

    // Count in-degree and out-degree
    for (int i = 0; i < m; i++) {A
        int giver = gifts[i].first;
        int receiver = gifts[i].second;

        out_degree[giver]++;
        in_degree[receiver]++;
    }

    int youngest = -1;

    // Check condition
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == n - 1 && out_degree[i] == 0) {
            youngest = i;
            break;
        }
    }

    cout << youngest << endl;
}
int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::pair<int, int>> gifts(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> gifts[i].first >> gifts[i].second;
    }
    find_youngest_member(n, m, gifts);
    return 0;
}
