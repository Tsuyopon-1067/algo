#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a[4];
    for(int i = 0; i < 4; i++) cin >> a[i];
    int m[4] = {50, 10, 5, 1};

    int ans = 0;
    rep(i, 4) {
        while (m[i] <= x && 0 < a[i]) {
            x -= m[i];
            a[i]--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
