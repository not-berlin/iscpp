#include <bits/stdc++.h>
using namespace std;
const int N = 100;
const int M = (int)1e9;
int dp[N + 3][N + 3], d[N + 3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);
    int n; cin >> n;
    for (int i = 0; i <= n; i++) cin >> d[i];
    for (int i = 1; i <= n; i++) dp[i][i + 1] = d[i - 1] * d[i] * d[i + 1];
    for (int l = 2; l < n; l++) {
        for (int i = 1; i <= n - l; i++) {
            int j = i + l;
            dp[i][j] = M;
            for (int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + d[i - 1] * d[k] * d[j]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}