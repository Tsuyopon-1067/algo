#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    int k = 0;
    rep(i, m) {
        int b;
        cin >> b;
        if (a[k] < b) {
            ans++;
            k++;
            if(k == n) break;
        }
    }
    cout << k << endl;
    return 0;
}
