#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;

    int ans = 0;
    rep(i, s.size()) if(s[i] != t[i]) ans++;
    cout << ans << endl;
    return 0;
}
