#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI2.inp", "r", stdin);
    freopen("BAI2.out", "w", stdout);
    int n ; cin >> n;
    int ans = 1;
    while (n--) {
        string s; cin >> s;
        int tmp = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) tmp++;
            else tmp = 1;
            ans = max(ans, tmp);
        }
        if (s.size() > 0 && ans == 0) ans = 1;
    }
    cout << ans;
    return 0;
}