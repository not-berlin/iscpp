#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TANGDV.inp", "r", stdin);
    freopen("TANGDV.out", "w", stdout);
    int t; cin >> t;
    while (t--) {
        ll a, b, n;
        cin >> a >> b >> n;
        ll cnt = 0;
        while (a <= n && b <= n) {
            if (a < b) a += b;
            else b += a;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}