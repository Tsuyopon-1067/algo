#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < b) swap(a, b);
    while(a % b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    cout << b << endl;
    return 0;
}
