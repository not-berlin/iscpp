#include <bits/stdc++.h>
using namespace std;
int t, x, y;
string a, b, sa, sb;
int la, lb;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("STRLCM.INP", "r", stdin);
    freopen("STRLCM.OUT", "w", stdout);
    cin >> t;
    while (t--){
        sa = ""; sb = "";
        cin >> a;
        cin >> b;
        x = a.size();
        y = b.size();
        int l = (x * y) / __gcd(x, y);
        la = l / x; lb = l / y;
        for (int i = 1; i <= la; i++) sa += a;
        for (int i = 1; i <= lb; i++) sb += b;
        if (sa == sb) cout << sa << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}