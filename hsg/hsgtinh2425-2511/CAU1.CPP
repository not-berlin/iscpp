#include <bits/stdc++.h>
using namespace std;
long long l = 1, ans = 1;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    // freopen("CAU1.inp", "r", stdin);
    // freopen("CAU1.out", "w", stdout);
    long long n, a, b;
    cin >> n >> a >> b;
    l = (a / __gcd(a, b)) * b;
    ans = n / l;
    cout << ans;
    return 0;
}