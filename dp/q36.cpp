#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        x[i] = temp % a;
    }

    vector<vector<bool>> dp(n+1, vector<bool>(a, false));
    dp[0][0] = true;
    rep(i, n)rep(j, a){
        if(dp[i][j] == false) continue;
        dp[i+1][j] = true;
        int t = (j + x[i]) % a;
        dp[i+1][t] = true;
    }

    cout << (dp[n][b] ? "Yes" : "No") << endl;
    return 0;
}
