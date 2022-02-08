#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++)for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }

    vector<vector<int>> dp(n, vector<int>(n, 2000000000));
    dp[0][n-1] = a[0][n-1];
    for(int i = 0; i < n; i++)for(int j = n-1; j >= 0; j--){
        if(i-1 >= 0){
            dp[i][j] = dp[i-1][j] + a[i][j];
        }
        if(j+1 <= n-1){
            dp[i][j] = min(dp[i][j], dp[i][j+1] + a[i][j]);
        }
    }

    cout << dp[n-1][0] << endl;

    return 0;
}
