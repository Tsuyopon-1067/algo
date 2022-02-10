#define _GLIBCXX_DEBUG
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

void rec(int v, vector<vector<int>> &g) {
    printf("%d ", v);
    for (auto t : g[v]) {
        rec(t, g);
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

    rec(0, g);
    cout << endl;
    return 0;
}
