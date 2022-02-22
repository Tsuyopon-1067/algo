#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#define INF 2000000000
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    vector<vector<int>> dp(n+1, vector<int>(m+1, INF));
    dp[0][0] = 0;
    rep (i, n) {
        int a;
        cin >> a;
        rep (j, m+1) {
            dp[i+1][j] = min(dp[i][j], dp[i+1][j]);
            int idx = a + j;
            if (idx <= m) dp[i+1][idx] = min(dp[i][j]+1, dp[i+1][idx]);
        }
    }
    cout << (dp[n][m] == INF ? -1 : dp[n][m]) << endl;
    return 0;
}