#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    int sum = 0;
    rep(i, n){
        cin >> w[i];
        sum += w[i];
    }

    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
    dp[0][0] = true;
    rep(i, n)rep(j, sum+1){
        if(dp[i][j] == false) continue;
        dp[i+1][j] = true;
        if(j + w[i] <= sum) dp[i+1][j+w[i]] = true;
    }

    int ans = sum;
    rep(j, sum+1){
        if(dp[n][j]) ans = min(ans, abs(sum - 2*j));
    }
    cout << ans << endl;

    return 0;
}
