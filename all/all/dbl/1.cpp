#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n){
        int a;
        cin >> a;

        bool isPrime = true; 
        if(a == 1) isPrime = false;
        for(int i = 2; i < a; i++) if(a % i == 0) isPrime = false;
        if(isPrime) ans++;
    }
    cout << ans << endl;
    return 0;
}
