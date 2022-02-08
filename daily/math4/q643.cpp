#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b==0) cout << a << endl;
    else cout << (b > 0 ? "inf" : "-inf") << endl;
    return 0;
}
