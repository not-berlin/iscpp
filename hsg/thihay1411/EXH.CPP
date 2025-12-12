#include <bits/stdc++.h>
using namespace std;
const int N = 500000;
const long long M = 1e18;

struct P {
    long long a, b;
} p[N + 5];

bool cmp(P x, P y) {
    return x.a < y.a;
}

long long f[N + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("EXH.inp", "r", stdin);
    freopen("EXH.out", "w", stdout);
    int n; 
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].a >> p[i].b;
    }
    sort(p + 1, p + n + 1, cmp);

    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + p[i].b;
    }

    long long ans = -M;
    int j = 2;

    for (int i = 1; i <= n - 1; i++) {
        if (j <= i) j = i + 1;
        while (j < n && (f[j + 1] - f[i - 1]) - (p[j + 1].a - p[i].a) >= (f[j] - f[i - 1]) - (p[j].a - p[i].a)) {
            j++;
        }
        if (j >= i + 1) {
            long long tmp = (f[j] - f[i - 1]) - (p[j].a - p[i].a);
            if (tmp > ans) ans = tmp;
        }
    }

    cout << ans;
    return 0;
}
