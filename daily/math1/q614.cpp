#define _GLIBCXX_DEBUG
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    reps(1, i, n)reps(i+1, j, n+1) ans += i * j;
    cout << ans << endl;
    return 0;
}
