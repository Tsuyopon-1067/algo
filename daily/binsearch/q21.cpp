#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    double a = 0;
    double b = 100;

    double x;
    rep(i, 20) {
        x = (a+b)/2;
        if (x * (x * (x + 1) + 2) + 3 < n) a = x;
        else b = x;
    }
    cout << x << endl;
    return 0;
}
