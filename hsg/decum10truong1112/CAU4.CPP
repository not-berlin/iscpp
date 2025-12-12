#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000;
const ll M = 2e18;
long long f[N + 5], c[N + 5], d[N + 5];

struct tamgo {
    ll a;
    ll b;
} z[N + 5];

bool cmp (tamgo m, tamgo n) {
    return m.a > n.a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU4.INP", "r", stdin);
    freopen("CAU4.OUT", "w", stdout);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> z[i].a;
    for (int i = 1; i <= n; i++) cin >> z[i].b;
    sort (z + 1, z + n + 1, cmp);
    f[0] = 0;
    c[0] = -M;
    d[n + 1] = -M;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + z[i].a;
        c[i] = max(c[i - 1], z[i].b - z[i].a);
    }
    for (int i = n; i >= 1; i--) d[i] = max(d[i + 1], z[i].b);

    while(q--) {
        int k; cin >> k;
        cout << max(f[k] + c[k], f[k - 1] + d[k]) << ' ';
    }
    return 0;
}