#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int f[N + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        f[x]++;
    }
    for (int i = 1; i <= N; i++) {
        if (f[i] == 1) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}