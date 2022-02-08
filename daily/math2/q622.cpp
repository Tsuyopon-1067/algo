#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> flug(1001, false);
    rep(i, n) {
        int a;
        cin >> a;
        flug[a] = true;
    }
    rep(i, m) {
        int a;
        cin >> a;
        flug[a] = true;
    }
    rep(i, 1001) {
        if (flug[i]) cout << i << endl;
    }
    return 0;
}
