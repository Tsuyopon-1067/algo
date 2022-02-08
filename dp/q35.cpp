#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> w(n);
    for(int i = 0; i < n; i++) cin >> w[i];
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    dp[0][0] = 0;
    rep(i, n)rep(j, m+1){
        if(dp[i][j] == -1) continue;
        if(dp[i+1][j] == -1) dp[i+1][j] = dp[i][j];
        else dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        if(j + w[i] <= m) dp[i+1][j + w[i]] = min(dp[i][j] + 1, dp[i+1][j+w[i]]);
    }
    
    cout << dp[n][m] << endl;
    return 0;
}
