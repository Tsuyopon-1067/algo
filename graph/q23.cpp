#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& g, int v, int p, vector<int>& ans) {
    if (v == 0) ans[v] = 0;
    else ans[v] = ans[p] + 1;
    for (auto vv : g[v]) {
        dfs(g, vv, v, ans);
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    reps (1, i, n) {
        int t;
        cin >> t;
        g[t].push_back(i);
    }

    vector<int> ans(n);
    dfs(g, 0, 0, ans);
    rep (i, n) cout << ans[i] << endl;
    return 0;
}
