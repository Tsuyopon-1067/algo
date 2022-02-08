#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    rep(i, n+1) {
        cout << x << endl;
        x += 500;
    }
    return 0;
}
