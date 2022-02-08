#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> w(n), v(n);
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) cin >> v[i];
    
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    int ans = 0;
    rep(i, n)rep(j, m+1){
        dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        int t = j + w[i];
        if(t <= m) dp[i+1][t] = max(dp[i][t], dp[i][j] + v[i]);
        ans = max(ans, dp[i][j]);
    }
    rep(j, m+1){
        ans = max(ans, dp[n][j]);
    }

    cout << ans << endl;
    return 0;
}
