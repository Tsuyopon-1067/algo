#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    string ans = "No";
    rep(i, n)reps(i+1, j, n){
        if(s[i] == s[j]) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}
