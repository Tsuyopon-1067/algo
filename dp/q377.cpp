#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // 入力
    int N;
    cin >> N;
    vector<int> W(N);
    for (int i = 0; i < N; ++i) cin >> W[i];

    // ありうる差の最大値
    int M = 0;
    for (int i = 0; i < N; ++i) M += W[i];

    // (N+1) × (M+1) の配列を用意する
    // 配列全体を false で初期化する
    vector<vector<bool>> dp(N+1, vector<bool>(M+1, false));

    // 初期条件
    dp[0][0] = true;
    
    // ループ
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M+1; ++j) {
            // マス (i, j) へ到達不能の場合はスキップ
            if (!dp[i][j]) continue;

            // 更新
            dp[i+1][j+W[i]] = true;
            dp[i+1][abs(j-W[i])] = true;
        }
    }

    // 答え
    int res = 0;
    while (!dp[N][res]) ++res;
    cout << res << endl;
    for(int i = 0; i < N+1; i++){
        for(int j = 0; j < M+1; j++) cout << (dp[i][j] ? "o" : "x");
        cout << '\n';
    }
}
