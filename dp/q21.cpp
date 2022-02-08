#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<vector<int>> a(4, vector<int>(4, 0));
	for(int i = 0; i < 4; i++) cin >> a[0][i];

	reps(1, i, 4){
		rep(j, 4){
			a[i][j] += a[i-1][j];
			if(j != 0) a[i][j] += a[i-1][j-1];
			if(j != 3) a[i][j] += a[i-1][j+1];
		}
	}

	cout << a[3][3] << endl;

	return 0;
}
