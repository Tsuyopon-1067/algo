#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    rep(i, n)reps(i+1, j, n){
        if(s[i] == s[j]) ans++;
    }
    cout << ans << endl;
    return 0;
}
