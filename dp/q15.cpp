#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[100];
	for(int i = 0; i < n; i++) cin >> a[i];

	int t[100];
	t[0] = 0;
	t[1] = a[1];
	reps(2, i, n){
		t[i] = t[i-1] + a[i];
		int j = 2;
		while(j <= m && i - j >= 0){
			t[i] = min(t[i], t[i-j] + j*a[i]);
			j++;
		}
	}
	cout << t[n-1] << endl;

	return 0;
}
