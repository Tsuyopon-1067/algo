#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;

	if(n == 1) cout << x << endl;
	else if(n == 2) cout << y << endl;

	int a1 = y;
	int a2 = x;
	int ans;
	reps(2, i, n){
		ans = (a1 + a2)%100;
		a2 = a1;
		a1 = ans;
	}
	cout << ans << endl;

	return 0;
}
