#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DIVISOR.inp", "r", stdin);
    freopen("DIVISOR.out", "w", stdout);
    long long n, k; cin >> n >> k;
    long long cnt = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt += 2;
            if (i * i == n) cnt--;
        }
    }
    int t = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            t++;
            if (t == k) {
                cout << i;
                return 0;
            }
            else if ((cnt - t + 1) == k) {
                cout << n/i;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}