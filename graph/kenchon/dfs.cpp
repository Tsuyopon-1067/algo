#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &g, vector<bool> &vst, int v) {
    cout << v << endl;
    vst[v] = true;
    for (auto next_v : g[v]) {
        if (vst[next_v]) continue;
        dfs (g, vst, next_v);
    }

}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<bool> vst(n, false);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(g, vst, 0);

    return 0;
}
