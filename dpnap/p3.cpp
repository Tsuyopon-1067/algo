#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    vector<vector<bool>> dp(n+1, vector<bool>(m+1, false));
    dp[0][0] = true;

    rep (i, n) {
        int a;
        cin >> a;
        rep (j, m+1) {
            if (!dp[i][j]) continue;
            dp[i+1][j] = true;
            int idx = j + a;
            if (idx <= m) dp[i+1][idx] = true;
        }
    }
    cout << (dp[n][m] ? "Yes" : "No") << endl;
    return 0;
}
