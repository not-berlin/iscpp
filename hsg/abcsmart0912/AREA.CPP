#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("AREA.INP", "r", stdin);
    freopen("AREA.OUT", "w", stdout);
    ll x, s;
    cin >> x >> s;
    if (s % x != 0) {
        cout << "NONE";
        return 0;
    }
    ll a = s/x, b = a - x;
    if (b <= 0) {
        cout << "NONE";
        return 0;
    }
    ll res = a*b; cout << res;
    return 0;
}