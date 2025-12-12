#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("RDSENTEN.INP", "r", stdin);
    freopen("RDSENTEN.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long n1 = (n - 1 + MOD) % MOD;
        long long n2 = n % MOD;
        long long n3 = (n + 1) % MOD;
        long long ans = (((n1*n2) % MOD) * n3) % MOD;
        long long tmp = 333333336;
        long long ans = (ans * tmp) % MOD;
        cout << ans << '\n';
    }
    return 0;
}