#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& g, vector<int>& child, int v) {
    for (auto c : g[v]) search(g, child, c);
    for (auto c : g[v]) child[v] += child[c];
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    reps (1, i, n) {
        int p;
        cin >> p;
        g[p].push_back(i);
    }
    vector<int> child(n, 1);
    search(g, child, 0);
    rep (i, n) cout << child[i]-1 << endl;
    return 0;
}
