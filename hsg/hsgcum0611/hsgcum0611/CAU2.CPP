#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int a[2*N + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU2.inp", "r", stdin);
    freopen("CAU2.out", "w", stdout);
    int n, k, b; cin >> n >> k >> b;
    for (int i = 1; i <= b; i++) {
        int x; cin >> x;
        a[x] = 1;
    }
    int tmp = 0;
    for (int i = 1; i <= k; i++) if (a[i] == 1) tmp++;
    int ans = tmp;
    for (int i = k + 1; i <= n; i++) {
        tmp = tmp - a[i - k] + a[i];
        ans = min(ans, tmp);
    }
    cout << ans;
    return 0;
}