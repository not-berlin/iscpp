#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
const long long M = 2e9;
#define ll long long
ll a[N + 5];
int n; ll k; 

bool check(ll q) {
    ll cnt = 0;
    for (int i = 1; i < n; i++) {
        ll d = a[i + 1] - a[i];
        cnt += (d - 1)/q;
    }
    return cnt <= k;
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("COTCHAN.inp", "r", stdin);
    freopen("COTCHAN.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    ll l = 1, r = M, ans = M;
    while (l <= r) {
        ll mid = l + (r - l)/2;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}

