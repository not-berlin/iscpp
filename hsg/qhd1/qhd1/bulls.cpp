#include <bits/stdc++.h>
using namespace std;

const int MOD = 2111992;
int n, k, f[100100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("bulls.inp", "r", stdin);
    freopen("bulls.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i < k + 2; i++) f[i] = (i + 1) % MOD;
    for (int i = k + 2; i <= n; i++) f[i] = (f[i - k - 1] % MOD + f[i - 1] % MOD) % MOD;
    cout << f[n];
    return 0;
}