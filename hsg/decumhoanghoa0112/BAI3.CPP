#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    ll a, b, c, M;
    cin >> a >> b >> c >> M;
    ll ab = a * b, ac = a * c, bc = b * c;
    ll ans = max({ab, ac, bc}) % M;
    if (ans < 0) cout << ans + M;
    else if (ans == 0) cout << 0;
    else cout << ans;
    return 0;
}