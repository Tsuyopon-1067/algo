#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    const long long MOD = 1e9;
    long long n, x, r;
    cin >> n >> x >> r;
    long long ans = 1;
    rep(i, n) {
        ans = ans * r % MOD;
    }
    ans %= MOD;
    ans = (ans * x - x + MOD) % MOD;
    printf("%lld\n", ans); 
    return 0;
}
