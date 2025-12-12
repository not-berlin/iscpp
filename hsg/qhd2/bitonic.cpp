#include <bits/stdc++.h>
using namespace std;
long long a[1003];
long long f[1003], g[1003];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("bitonic.inp", "r", stdin);
    freopen("bitonic.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        f[i] = a[i];
        for (int j = 1; j < i; j++) {
            if (a[j] < a[i]) f[i] = max(f[i], f[j] + a[i]);
        }
    }

    for (int i = n; i >= 1; i--) {
        g[i] = a[i];
        for (int j = n; j > i; j--) {
            if (a[j] < a[i]) g[i] = max(g[i], g[j] + a[i]);
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        if (f[i] > a[i] && g[i] > a[i]) ans = max(ans, f[i] + g[i] - a[i]);
    }
    cout << ans;
    return 0;
}