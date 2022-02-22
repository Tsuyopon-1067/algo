#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    dp[0][0] = 1;

    rep (i, n) {
        int a;
        cin >> a;
        rep (j, m+1) {
            dp[i+1][j] = dp[i+1][j] + dp[i][j];
            dp[i+1][j] %= 1000;
            int idx = j + a;
            if (idx <= m) {
                dp[i+1][idx] = dp[i+1][idx] + dp[i][j];
                dp[i+1][idx] %= 1000;
            }
        }
    }
    cout << dp[n][m]%1000 << endl;
    return 0;
}
