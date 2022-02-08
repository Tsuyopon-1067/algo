#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    int b = 99999999;
    int ans = 0;
    rep(i, n){
        cin >> a;
        if(a > b) ans++;
        b = a;
    }
    cout << ans << endl;
    return 0;
}
