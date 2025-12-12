#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve (ll x, ll y, ll p) {
    ll cnt = 0, pp = p;
    while (pp <= y) {
        ll m = (y / pp) * pp;
        if (m >= x) cnt++;
        else break;
        if (y / p < pp) break;
        pp *= p;
    }
    return cnt;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("ZEROS.inp", "r", stdin);
    freopen("ZEROS.out", "w", stdout);
    ll a, b; cin >> a >> b;
    ll c2 = solve(a, b, 2);
    ll c5 = solve(a, b, 5);
    cout << min(c2, c5);
    return 0;
}