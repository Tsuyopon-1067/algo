#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int r = (int)sqrt(n) + 1;
    bool res = true;
    reps (2, i, r) {
        if (n % i == 0) res = false;
    }
    if (n == 1) res = false;
    return res;
}
int main() {
    int n;
    cin >> n;
    int ans = 2;
    while (n > 0) {
        if (isPrime(n)) {
            ans = n;
            break;
        }
        if (n % 2 == 0) n--;
        else n -= 2;
    }
    cout << ans << endl;

    return 0;
}
