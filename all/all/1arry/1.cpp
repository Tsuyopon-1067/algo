#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    bool ans = false;
    rep(i, n){
        int a;
        cin >> a;
        if(a == v) ans = true;
    }
    
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
