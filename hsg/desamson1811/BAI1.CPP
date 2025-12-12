#include <bits/stdc++.h>
using namespace std;
const int N = 30000;
int a[N + 3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    a[n + 1] = a[1];
    int x = 0, y = 0, z = 0, i = 1;
    while (i <= n) {
        int j = i + 1;
        if (a[i] == a[j]) {
            while (j <= n && a[j] == a[j + 1]) j++;
            x++;
        }
        else if (a[i] < a[j]) {
            while (j <= n && a[j] < a[j + 1]) j++;
            y++;
        }
        else {
            while (j <= n && a[j] > a[j + 1]) j++;
            z++;
        }
        i = j;
    }
    cout << x << ' ' << y << ' ' << z;
    return 0;
}