#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100005;

ll a[N], f1[N], f2[N], f3[N], f4[N], f5[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU3.inp", "r", stdin);
    freopen("CAU3.out", "w", stdout);
    ll n, w1, w2; cin >> n >> w1 >> w2;
    for (int i = 1; i <= n; i++) cin >> a[i];

    memset(f1, -0x0f, sizeof(f1));
    memset(f2, -0x0f, sizeof(f2));
    memset(f3, -0x0f, sizeof(f3));
    memset(f4, -0x0f, sizeof(f4));
    memset(f5, -0x0f, sizeof(f5));

    for (int i = 1; i <= n; i++)
        f1[i] = max(f1[i - 1], w1 * a[i]);
    
    for (int i = 2; i <= n; i++)
        f2[i] = max(f2[i - 1], f1[i - 1] + w2 * a[i]);

    for (int i = 3; i <= n; i++)
        f3[i] = max(f3[i - 1], f2[i - 1] + a[i]);

    for (int i = 4; i <= n; i++)
        f4[i] = max(f4[i - 1], f3[i - 1] + w2 * a[i]);

    for (int i = 5; i <= n; i++)
        f5[i] = max(f5[i - 1], f4[i - 1] + w1 * a[i]);

    cout << f5[n];
    return 0;
}