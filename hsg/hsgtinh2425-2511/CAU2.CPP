#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
#define fir first
#define sec second
pair<long long, int> a[N + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU2.inp", "r", stdin);
    freopen("CAU2.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].fir;
        a[i].sec = i;
    }
    int ans = 1;
    sort (a + 1, a + n + 1);
    for (int i = 1; i < n; i++) 
        if (a[i + 1].sec < a[i].sec) ans++;
    cout << ans;
    return 0;
}