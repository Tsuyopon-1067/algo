#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    reps(l, i, r+1)reps(i+1, j, r+1){
        if(i % 10 == j % 10) ans++;
    }
    cout << ans << endl;
}
