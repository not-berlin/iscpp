#include <bits/stdc++.h>

using namespace std;

long long f[5005][5005], a[5005], b[5005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("ENERGY.inp", "r", stdin);
    freopen("ENERGY.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++) cin >> a[i];
    for (int i = 0; i <= m; i++) cin >> b[i];
    memset(f, -0x0f, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) f[i][j] = max(f[i - 1][j], f[i - 1][j - 1] + a[i] * b[j]);
    }
    cout << f[n][m];
    return 0;
}
