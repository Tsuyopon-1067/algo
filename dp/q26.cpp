#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	rep(i, n)rep(j, n) cin >> a[i][j];

	vector<vector<int>> dp(n, vector<int>(n));
	dp[0][0] = a[0][0];
	reps(1, i, n){
		dp[i][0] += dp[i-1][0] + a[i][0];
		dp[0][i] += dp[0][i-1] + a[0][i];
	}
	reps(1, i, n)reps(1, j, n){
		dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
	}

	cout << dp[n-1][n-1] << endl;
	return 0;
}
