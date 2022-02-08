#include <bits/stdc++.h>
using namespace std;

int main() {
    bool flug = true;
    int ans = 55;
    do {
        flug = false;
        for (int i = 2; i < ans; i++) {
            if (ans % i == 0) flug = true;
        }
        if (flug == false) cout << ans << endl;
        ans += 2;
    } while (flug);
    return 0;
}
