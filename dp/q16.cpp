#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int d[20];
	for(int i = 0; i < m; i++) cin >> d[i];

	bool a[1001] = {false};
	a[0] = true;
	rep(i, n+1){
		if(a[i]){
			rep(j, m){
				if(i+d[j] <= n) a[i+d[j]] = true;
			}
		}
	}
	cout << (a[n] ? "Yes" : "No") << endl;
	return 0;
}
