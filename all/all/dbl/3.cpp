#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    reps(l, i, r+1){
        string s, t;
        s = to_string(i);
        t = s;
        bool isRoop = true;
        rep(j, s.size()){
            if(s[j] != t[s.size()-1-j]) isRoop = false;
        }
        if(isRoop) ans++;
    }
    cout << ans << endl;
    return 0;
}
