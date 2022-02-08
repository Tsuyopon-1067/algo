#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++) ans += pow((2*i-1), 2);
    cout << ans << endl;
    return 0;
}
