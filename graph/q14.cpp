#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> g(n, vector<int>());
    
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    set <int> arfSet;
    for (auto f : g[x]) arfSet.insert(f);
    set <int> ans;
    for (auto arf : g[x]) {
        for (auto frfr : g[arf]) {
            if (frfr != x && arfSet.count(frfr) == 0) {
                ans.insert(frfr);
            }
        }
    }
    cout << ans.size() << endl;

    return 0;
}
