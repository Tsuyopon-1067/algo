#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
double f(int n, int x) {
    double res = n;
    rep (i, 5) res *= x;

    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    return 0;
}
