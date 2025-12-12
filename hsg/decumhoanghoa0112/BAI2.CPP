#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI2.inp", "r", stdin);
    freopen("BAI2.out", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    int d = 0;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            d = d + 1;
            ans = ans + d;
        } 
        else d = 0;
    }
    cout << ans;
    return 0;
}