#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "Yes";
    
    for(int i = 2; i < n; i++){
        if(n % i == 0) ans = "No";
    }
    if(n == 1) ans = "No";
    cout << ans << endl;
    return 0;
}
