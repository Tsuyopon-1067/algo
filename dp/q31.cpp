#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n-1);
    rep(i, n-1) cin >> a[i];
    vector<vector<bool>> dp(n, vector<bool>(m, false));

    dp[0][0] = true;
    rep(i, n)rep(j, m){
        if(dp[i][j] == false) continue;
        if(i+1 < n){
            dp[i+1][j] = true;
            if(j+a[i] < m){
                dp[i+1][j+a[i]] = true;
            }
        }
    }
    
    int ans = 0;
    rep(i, m) {
        if(dp[n-1][i]) ans++;
    }
    cout << ans << endl;

    return 0;
}
