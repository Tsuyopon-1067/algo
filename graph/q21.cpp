#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> g(n-1);
    for(int i = 0; i < n-1; i++) cin >> g[i];
    int ans = 1;
    int t = g[x-1];
    while (t != 0) {
        t = g[t-1];
        ans++;
    }
    cout << ans << endl;
    return 0;
}
