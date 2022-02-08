#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "No";
    regex reg{R"(algo)"};
    smatch m;

    if (regex_search(s, m, reg)) ans = "Yes";
    cout << ans << endl;

    return 0;
}
