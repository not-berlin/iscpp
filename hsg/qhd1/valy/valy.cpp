#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int dp[N + 2], a[N + 2], c[N + 2], v[N + 2], x[N + 2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("valy.inp", "r", stdin);
    freopen("valy.out", "w", stdout);
    int n, w;
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i];
    for (int i = 1; i <= n; i++)
        for (int j = a[i]; j <= w; j++)
            if (dp[j] < dp[j - a[i]] + c[i]) {
                dp[j] = dp[j - a[i]] + c[i];
                v[j] = i;
            }

    cout << dp[w] << '\n';

    for (int i = 1; i <= w; i++)
        if (dp[i] == dp[w]) break;
    for (int i = w; i > 0; i = i - a[v[i]]) x[v[i]]++;
    for (int i = 1; i <= n; i++) {
        if (x[i] > 0)
            cout << i << " " << x[i] << "\n";
    }
    return 0;
}