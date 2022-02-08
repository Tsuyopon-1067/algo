#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int r = (y-x)/(b-a);
    cout << x-r*a << endl;
    return 0;
}
