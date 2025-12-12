#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
long long a[2*N + 5];
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI2.inp", "r", stdin);
    freopen("BAI2.out", "w", stdout);
    int m; ll y; cin >> m >> y;
    for (int i = 1; i <= m; i++) cin >> a[i];
    sort (a + 1, a + m + 1);
    int l = 1, r = m, ans = 0;
    while (l <= r) {
        if ((a[l] + a[r]) <= y) l++;
        ans++;
        r--;
    }
    cout << ans;
    return 0;
}