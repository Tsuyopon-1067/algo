#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(3));
	rep(i, n)rep(j, 3) cin >> a[i][j];

	vector<vector<int>> dp(n, vector<int>(3, 0));
	rep(i, 3) dp[0][i] = a[0][i];

	reps(1, i, n){
		dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i][0];
		dp[i][1] = max(dp[i-1][2], dp[i-1][0]) + a[i][1];
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + a[i][2];
	}

	cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << endl;
	return 0;
}
