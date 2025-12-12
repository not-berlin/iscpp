#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1e9;
const int N = 1000000;
ll a[N], b[N], ans;
int n, m;

bool check(ll k) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (!(a[i] >= b[j] - k && a[i] <= b[j] + k)) {
            j++;
            if (j == m) break;
        }
        if (j == m) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    sort (a, a + n);
    sort (b, b + m);
    int l = 0, r = M;
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