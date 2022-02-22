#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
#define INF 2000000000
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> dp(n+1, vector<int>(m+1, INF));
    dp[0][0] = 0;
    rep (i, n) {
        int a;
        cin >> a;
        rep (j, m+1) {
            dp[i+1][j] = min(dp[i][j], dp[i+1][j]);
            int idx = j + a;
            if (idx <= m) dp[i+1][idx] = dp[i][j]+1;
        }
    }
    cout << (dp[n][m] <= k ? "Yes" : "No") << endl;
    return 0;
}
