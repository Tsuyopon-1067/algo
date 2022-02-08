#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = s;
    string ans = "Yes";
    rep(i, s.size()){
        if(s[i] != t[s.size()-1 - i]) ans = "No";
    }
    cout << ans << endl;
    return 0;
}
