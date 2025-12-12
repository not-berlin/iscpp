#include <bits/stdc++.h>
using namespace std;
const int mod = 13051984;
int n, k;
int a[1005];
int dp[1005];
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    // freopen("STEP.inp", "r", stdin);
    // freopen("STEP.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        int x;
        cin >> x;
        a[x] = 1; 
    }
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            dp[i] = 0;
        } else {
            if (i == 1) {
                dp[i] = dp[0];
            } else {
                dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
            }
        }
    }
    cout << dp[n];
    return 0;
}