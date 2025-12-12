#include <bits/stdc++.h>
using namespace std;
#define fir first
#define sec second

const int N = 1000000;
int a[N + 6];
pair <int, int> b[N + 6];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("VANCHUYEN.inp", "r", stdin);
    freopen("VANCHUYEN.out", "w", stdout);
    int n, m; long long s;
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) {
        cin >> b[i].fir;
        b[i].sec = i;
    }

    sort (b + 1, b + m + 1);

    int mx = -1, p1 = 0, p2 = 0;
    for (int i = 1; i <= n; i++) {
        if (s - a[i] < 0) continue;
        pair <int, int> t = {s - a[i], 2e6};
        int j = upper_bound(b + 1, b + m + 1, t) - b - 1;
        if (j > 0 && a[i] + b[j].fir > mx) {
            mx = a[i] + b[j].fir;
            p1 = i;
            p2 = b[j].sec;
        }
    }
    cout << p1 << ' ' << p2;
    return 0;
}
