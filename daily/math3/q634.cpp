#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, d;
    cin >> n >> x >> d;
    cout << x*n + n*(n-1)*d/2 << endl;
    return 0;
}
