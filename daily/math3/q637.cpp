#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 1;
    rep(i, n) ans *= 2;
    printf("%lld\n", ans-1);
    return 0;
}
