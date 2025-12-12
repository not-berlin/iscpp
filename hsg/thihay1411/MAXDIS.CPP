#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> a;

ll solve(ll x) {
    int it = lower_bound(a.begin(), a.end(), x) - a.begin();
    ll res = 1e18;
    if (it < (int)a.size())
        res = min(res, abs(x - a[it]));
    if (it > 0)
        res = min(res, abs(x - a[it - 1]));
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("MAXDIS.inp", "r", stdin);
    freopen("MAXDIS.out", "w", stdout);

    ll n, L, R;
    cin >> n >> L >> R;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    vector<ll> p;
    p.push_back(L);
    p.push_back(R);
    for (int i = 0; i < n - 1; i++) {
        ll mid = (a[i] + a[i + 1]) / 2;
        for (ll x = max(L, mid - 2); x <= min(R, mid + 2); x++) p.push_back(x);
    }
    
    ll res = L, rd = -1;
    for (ll x : p) {
        if (x < L || x > R) continue;
        ll d = solve(x);
        if (d > rd || (d == rd && x > res))
            res = x, rd = d;
    }
    cout << res;
    return 0;
}
