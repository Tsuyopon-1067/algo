#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	vector<vector<int>> dp(n, vector<int>(n));
	bool yFlug = false, xFlug = false;
	rep(i, n){
		if(s[i][0] == '#') yFlug = true;
		if(s[0][i] == '#') xFlug = true;
		dp[i][0] = (yFlug ? 0 : 1);
		dp[0][i] = (xFlug ? 0 : 1);
	}

	reps(1, i, n)reps(1, j, n){
		dp[i][j] = dp[i-1][j] + dp[i][j-1];
		if(s[i][j] == '#') dp[i][j] = 0;
	}

	cout << dp[n-1][n-1] << endl;
	return 0;
}
