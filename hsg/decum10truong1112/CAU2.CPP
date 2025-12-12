#include <bits/stdc++.h>
using namespace std;
const int N = 2000;
int a[N + 25];

bool cmp (int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= n; i += k) {
        ans += (2*abs(a[i] - 1));
    }
    cout << ans;
    return 0;
}