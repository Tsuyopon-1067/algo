#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    reps(1, i, n+1){
        if(n % i == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}
