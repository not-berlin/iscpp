#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI2.inp", "r", stdin);
    freopen("BAI2.out", "w", stdout);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    for (int i = 1; i < n; i++)
        ans += (s[i] == s[i - 1] ? 2 : 1);
    s = '*' + s + '*';
    while (k--) {
        int x; cin >> x;
        s[x] = (s[x] == '0' ? '1' : '0');
        if (s[x - 1] != '*') ans += (s[x] == s[x - 1] ? 1 : -1);
        if (s[x + 1] != '*') ans += (s[x] == s[x + 1] ? 1 : -1);
        cout << ans << '\n';
    }
    return 0;
}