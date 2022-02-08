#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(int n) {
    vector<bool> res(n+1, true);
    res[0] = false;
    res[1] = false;
    for (int i = 2; i <= n; i++) {
        if (res[i] == false) continue;
        int jn = n / i;
        for (int j = 2; j <= jn; j++) res[i*j] = false;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<bool> p = isPrime(n);
    rep (i, n) {
        if (p[i+1]) ans++;
    }
    cout << ans << endl;
    return 0;
}
