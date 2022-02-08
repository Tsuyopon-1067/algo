#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0) cout << "Fizz";
        if(i % 5 == 0) cout << "Buzz";
        if(i % 3 * i % 5 != 0) cout << i;
        cout << '\n';
    }
    return 0;
}
