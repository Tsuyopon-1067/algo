#define _GLIBCXX_DEBUG
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long r = (int)sqrt(n) + 1;
    string ans = "Yes"; 
    reps (2, i, r) {
        if (n % i == 0) ans = "No"; 
    }
    if (n == 1) ans = "No"; 
    cout << ans << endl;
    return 0;
}
