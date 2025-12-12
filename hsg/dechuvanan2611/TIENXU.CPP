#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TIENXU.inp", "r", stdin);
    freopen("TIENXU.out", "w", stdout);
    ll a, b, c, ans = -1; cin >> a >> b >> c;
    for (ll x = 0; a * x <= c; x++) {
        ll r = c - a*x;
        if (r % b == 0) {
            ll y = r / b;
            ans = max(ans, x + y);
        }
    }
    cout << ans;
    return 0;
}