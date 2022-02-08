#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int mx = 0;
    rep (i, n) {
        if (g[mx].size() < g[i].size()) {
            mx = i;
        }
    }

    sort(g[mx].begin(), g[mx].end());
    for (auto a : g[mx]) printf("%d ", a);
    cout << endl;
    return 0;
}
