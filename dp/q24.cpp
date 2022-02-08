#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> dp(n, vector<int>(n));
	rep(i, n){
		dp[0][i] = 1;
		dp[i][0] = 1;
	}
	reps(1, i, n)reps(1, j, n){
		dp[i][j] = dp[i-1][j] + dp[i][j-1];
	}

	cout << dp[n-1][n-1] << endl;
	return 0;
}
