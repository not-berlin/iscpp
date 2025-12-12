#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
typedef long long ll;
int a[N + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CACHNHIET.inp", "r", stdin);
    freopen("CACHNHIET.out", "w", stdout);
    int n; cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n/2; i++)
        ans += a[n - i + 1] - a[i];
    cout << ans;
    return 0;
}