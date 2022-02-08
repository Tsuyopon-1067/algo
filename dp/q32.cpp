#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int w[n];
    for(int i = 0; i < n; i++) cin >> w[i];
    vector<vector<bool>> dp(n+1, vector<bool>(m+1, false));
    dp[0][0] = true;

    rep(i, n)rep(j, m+1){
        if(dp[i][j]){
            dp[i+1][j] = true;
            int t = j + w[i];
            if(t <= m) dp[i+1][t] = true;
        }
    }

    cout << (dp[n][m] ? "Yes" : "No") << endl;
    return 0;
}
