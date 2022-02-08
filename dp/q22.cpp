#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n+2, vector<int>(n+2, 0));
	for(int i = 0; i < n; i++) cin >> a[1][i+1];
	rep(i, n)rep(j, n){
		a[i+1][j+1] += a[i][j];
		a[i+1][j+1] += a[i][j+1];
		a[i+1][j+1] += a[i][j+2];
		a[i+1][j+1] %= 100;
	}
	cout << a[n][n] << endl;
	return 0;
}
