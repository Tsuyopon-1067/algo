#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0) count++;
        }
        if(count == k) ans++;
    }
    cout << ans << endl;
    return 0;
}
