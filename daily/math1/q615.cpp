#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 1;
    rep(i, n) {
        int a;
        cin >> a;
        ans *= a;
        ans %= 10;
    }
    cout << ans << endl;
    return 0;
}
