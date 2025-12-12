#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
long long a[N + 3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("UCLN.inp", "r", stdin);
    freopen("UCLN.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long ans = 0;
    for (int i = 1; i < n; i++) {
        ans = max(ans, __gcd(a[i], a[i + 1]));
    }
    cout << ans;
    return 0;
}