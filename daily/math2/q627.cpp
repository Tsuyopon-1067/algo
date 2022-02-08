#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<bool> flag(101);
    rep(i, x) {
        int a;
        cin >> a;
        flag[a] = true;
    }
    rep(i, y) {
        int a;
        cin >> a;
        flag[a] = true;
    }
    int k = 0;
    rep(i, 101) if (flag[i]) k++;
    cout << n-k << endl;
    return 0;
}
