#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("SOTHUNHI.inp", "r", stdin);
    freopen("SOTHUNHI.out", "w", stdout);
    int n; cin >> n;
    set <ll> st;
    for (int i = 1; i <= n; i++) {
        ll x; cin >> x;
        if (x < 0) st.insert(x);
    }
    int c = 0, ans = -1;
    while(1) {
        if(st.find(ans) == st.end()) {
            c++;
            if (c == 2) break;
        }
        ans--;
    }
    cout << ans;
    return 0;
}