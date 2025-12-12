#include <bits/stdc++.h>
using namespace std;
int n, ans = 1;
string s;
int work( int l, int r){
    while (l >= 0 && r < n && s[l] == s[r]){
        l--;
        r++;
    }
    return r - l - 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("maxpalin.inp", "r", stdin);
    freopen("maxpalin.out", "w", stdout);
    cin >> n >> s;
    if (n == 1){
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++){
        ans = max(ans, work(i, i));
        if (i + 1 < n)
            ans = max (ans, work(i, i+1));
    }
    cout << ans;
    return 0;
}