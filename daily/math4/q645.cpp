#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double r = a/b;
    if (r >= 1) cout << -1 << endl;
    //else cout << 1/(1-r) << endl;;
    else printf("%lf\n", 1/(1-r));
    return 0;
}
