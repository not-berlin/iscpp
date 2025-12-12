#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;

long long solve(long long a) {
    long long ans = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) ans += (i + a/i);
        if (i * i == a) ans -= i;
    }
    return ans;
}
long long b[N + 6];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TONGUOC.INP", "r", stdin);
    freopen("TONGUOC.OUT", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) {
        cout << solve(b[i]) << ' ';
    }
    return 0;
}