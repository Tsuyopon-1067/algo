#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	vector<int> t(n, 0);
	t[0] = 0;
	t[1] = a[1];
	reps(2, i, n){
		t[i] = min(t[i-1] + a[i], t[i-2] + 2*a[i]);
	}

	cout << t[n-1] << endl;

	return 0;
}
