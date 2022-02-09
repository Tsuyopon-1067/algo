#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long m = sqrt(n);

    long long ans = 0;
    for (int i = 1; i <= m; i++) {
        if (n % i == 0) ans += 2;
    }
    if (n == m * m) ans--;
    
    cout << ans << endl;

    return 0;
}
