#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    ll x, y, m, n; cin >> x >> y >> m >> n;
    ll a = (y/m) - ((x - 1)/m);
    ll b = (y/n) - ((x - 1)/n);
    ll l = m / (__gcd(m, n)) * n;
    ll tmp = (y/l) - ((x - 1)/l);
    cout << (y - x + 1) - (a + b - tmp);
    return 0;
}
