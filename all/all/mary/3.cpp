#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> a(x);
    vector<int> b(y);
    vector<int> c(z);
    for(int i = 0; i < x; i++) cin >> a[i];
    for(int i = 0; i < y; i++) cin >> b[i];
    for(int i = 0; i < z; i++) cin >> c[i];

    int ans = 0;
    rep(i, x)rep(j, y)rep(k, z){
        if(a[i] + b[j] == c[k]) ans++;
    }
    cout << ans << endl;
    return 0;
}
