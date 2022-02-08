#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k[9] = {0};
    rep(i, n){
        int a;
        cin >> a;
        k[a-1]++;
    }

    int ans = 0;
    int max = 0;
    rep(i, 9){
        if(max < k[i]){
            max = k[i];
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}
