#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    int ans = 0;
    rep(i, n){
        int a;
        cin >> a;
        if(a == v) ans++;
    }
    cout << ans << endl;
    return 0;
}
