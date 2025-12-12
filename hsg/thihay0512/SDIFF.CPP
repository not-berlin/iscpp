#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000000;
ll w[5*N + 6];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("SDIFF.INP", "r", stdin);
    freopen("SDIFF.OUT", "w", stdout);
    ll n, p, q, m, t; cin >> n >> p >> q >> m >> t;
    ll ans = 0;
    for (int i = 0; i < n; i++) w[i] = (p * (i + 1) + q) % m;
    deque <ll> dmax, dmin;
    int l = 0;
    for (int r = 0; r < n; r++) {
        while (!dmax.empty() && w[dmax.back()] < w[r]) dmax.pop_back();
        dmax.push_back(r);
        while (!dmin.empty() && w[dmin.back()] > w[r]) dmin.pop_back();
        dmin.push_back(r);
        while (!dmax.empty() && !dmin.empty() && (w[dmax.front()] - w[dmin.front()] > t)) {
            if (dmax.front() == l) dmax.pop_front();
            if (dmin.front() == l) dmin.pop_front();
            l++; 
        }
        ans += (r - l + 1);
    }
    cout << ans;
    return 0;
}