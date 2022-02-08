#define _GLIBCXX_DEBUG
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans[41];
	ans[0] = 1;
	ans[1] = 1;
	reps(2, i, n+1)	ans[i] = ans[i-1] + ans[i-2];
	cout << ans[n] << endl;
	return 0;
}
