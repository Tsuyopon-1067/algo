#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());
    rep(i, m){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    rep (i, n) {
        sort(g[i].begin(), g[i].end());
        for (auto x: g[i]) printf("%d ", x);
        cout << endl;
    }

    return 0;
}
