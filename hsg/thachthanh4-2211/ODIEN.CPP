#include <bits/stdc++.h>
using namespace std;

int n, m, a[1005], s, res;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("ODIEN.inp", "r", stdin);
    freopen("ODIEN.out", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, cmp);

    s = 0;
    res = 0;
    for(int i = 1; i <= n; i++) {
        s += a[i];
        if (i > 1) s--;
        res++;
        if (s >= m) break;
    }
    if (s >= m) cout << res;
    else cout << -1;
    return 0;
}