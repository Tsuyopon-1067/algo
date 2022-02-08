#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "Yes";
    reps (2, i, n) {
        if (n % i == 0) ans = "No";
    }
    if (n == 1) ans = "No";
    cout << ans << endl;
    return 0;
}
