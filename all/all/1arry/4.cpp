#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    int ans = -1;
    rep(i, n){
        int a;
        cin >> a;
        if(a == v) ans = i;
    }
    cout << ans << endl;
    return 0;
}
