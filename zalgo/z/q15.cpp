#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    bool res = true;
    int r = (int)sqrt(n) + 1;
    reps (2, i, r) {
        if (n % i == 0) res = false;
    }
    if (n == 1) res = false;
    return res;
}
int main() {
    int n;
    cin >> n;
    int r = n/2 + 1;
    reps (2, i, r) {
        if (isPrime(i)) {
            if (isPrime(n-i)) {
                cout << i << endl;
                return 0;
            }
        }

    }
    cout << -1 << endl;
    return 0;
}
