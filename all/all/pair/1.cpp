#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    rep(i, n)reps(i+1, j, n){
        if(a[i] + a[j] <= k) ans++;
    }
    cout << ans << endl;
    return 0;
}
