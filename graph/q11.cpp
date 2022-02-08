#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<vector<bool>> s(n, vector<bool>(n));
    rep(i, n)rep(j, n){
        char temp;
        cin >> temp;
        s[i][j] = (temp == 'o' ? true : false);
    }

    cout << (s[a][b] ? "Yes" : "No") << endl;

    return 0;
}
