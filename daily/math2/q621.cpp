#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    rep(i, m) {
        int b;
        cin >> b;
        rep(j, n){
            if (b == a[j]) {
                cout << b << endl;
                break;
            }
        }
    }
    return 0;
}
