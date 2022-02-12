#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& g, vector<int>& d, int v, int p) {
    if (v == 0) d[0] = 0;
    else d[v] = d[p] + 1;
    for (auto c : g[v]) dfs(g, d, c, v);
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    reps(1, i, n) {
        int t;
        cin >> t;
        g[t].push_back(i);
    }
    vector<int> d(n);
    dfs(g, d, 0, 0);
    int ans = 0;
    for (int i = 0; i < n; i++) ans = max(ans, d[i]);
    cout << ans << endl;
    return 0;
}
