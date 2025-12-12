#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    long long ans = 0;
    int res = 1;
    int n; cin >> n;
    string s; cin >> s;
    long long sc = 0, sg = 0;
    for (char c : s) {
        if (c == 'C') sc++;
        else if (c == 'G') sg++;
    }
    for (int i = 1; i <= n; i++) {
        string x; cin >> x;
        long long xc = 0, xg = 0;
        for (int c : x) {
            if (c == 'C') xc++;
            else if (c == 'G') xg++;
        }
        long long tmp = xc*sg + sc*xg;
        if (ans < tmp) {
            ans = tmp;
            res = i;
        }
    }
    cout << res;
    return 0;
}