#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int k[31];
	k[1] = 1;
	k[2] = 2;
	k[3] = 4;
	for(int i = 4; i <= n; i++) k[i] = k[i-1] + k[i-2] + k[i-3];
	cout << k[n] << endl;
	return 0;
}
