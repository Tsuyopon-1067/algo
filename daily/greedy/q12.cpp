#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    while (n > 0) {
        n % 2 ? n-- : n /= 2;
        ans++;
    }
    cout << ans << endl;

    return 0;
}
