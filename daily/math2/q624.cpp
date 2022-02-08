#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    if (x < y) swap(x, y);
    int g;
    for (g = x; g >= 1; g--) {
        if (x % g == 0 && y % g == 0) break;
    }
    cout << n / (x*y/g) << endl;
    return 0;
}
