#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    string ans = "No";
    rep(i, s.size()-t.size()+1){
        bool flug = true;
        rep(j, t.size()){
            if(s[i+j] != t[j]) flug = false;
        }
        if(flug) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}
