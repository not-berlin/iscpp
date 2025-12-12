#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("NOINHANH.inp", "r", stdin);
    freopen("NOINHANH.out", "w", stdout);
    long long n, ans = 0;
    cin >> n;
    while (n--) {
        long long x; cin >> x;
        ans += x;
        cout << ans << ' ';
    }
    return 0;
}