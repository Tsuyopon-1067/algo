#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char t = '1';
    int ans = 0;
    rep(i, s.size()){
        if(t == s[i]) ans++;
        t = s[i];
    }
    cout << ans << endl;
    return 0;
}
