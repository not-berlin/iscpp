#include <bits/stdc++.h>
using namespace std;
int n, tmp, ans = 0;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("filename.inp", "r", stdin);
    freopen("filename.out", "w", stdout);
    cin >> n >> s;
    s += ' ';
    for (int i = 0; i <= n; i++){
        if (s[i] == 'x') tmp++;
        else{
            if (tmp > 2) ans += tmp - 2;
            tmp = 0;
        }
    }
    cout << ans;
    return 0;
}