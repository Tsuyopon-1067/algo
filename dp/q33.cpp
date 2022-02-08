#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n-1);
    vector<int> b(n-1);
    for(int i = 0; i < n-1; i++) cin >> a[i];
    for(int i = 0; i < n-1; i++) cin >> b[i];

    vector<vector<int>> dp(n, vector<int>(m, -1));
    dp[0][0] = 0;
    rep(i, n-1)rep(j, m){
        if(dp[i][j] == -1) continue;
        dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        int t = j + a[i];
        if(t <= m-1) dp[i+1][t] = max(dp[i+1][t], dp[i][j] + b[i]);
    }

    cout << dp[n-1][m-1] << endl;
    return 0;
}
