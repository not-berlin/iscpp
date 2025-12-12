#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[10005];
int dp[10005][1005];
const int md = 1e9 + 7;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] %= k;
    }

    dp[1][a[1]] = 1;
    dp[1][(k - a[1]) % k] = (dp[1][(k - a[1]) % k] + 1) % md;

    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < k; ++j) {
            if (dp[i - 1][j]) {
                int r1 = (j + a[i]) % k;
                int r2 = (j - a[i] + k) % k;
                dp[i][r1] = (dp[i][r1] + dp[i - 1][j]) % md;
                dp[i][r2] = (dp[i][r2] + dp[i - 1][j]) % md;
            }
        }
    }

    cout << dp[n][0];

    return 0;
}