#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double r = a/b;
    if (-1 < r && r <= 1) cout << 1 << endl;
    else if (1 < r) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}
