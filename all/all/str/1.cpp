#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s;
    cin >> c;
    string ans = "No";
    rep(i, s.size()) if(s[i] == c) ans = "Yes";
    cout << ans << endl;
    return 0;
}
