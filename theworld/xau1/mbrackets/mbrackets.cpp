#include <bits/stdc++.h>
using namespace std;
string s;
int t, n;
int x, y, res;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("mbrackets.inp", "r", stdin);
    freopen("mbrackets.out", "w", stdout);
    cin >> t;
    while (t--){
        x = 0; y = 0; res = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++){
            if (s[i] == '(') x++;
            else{
                y++;
                if (x < y){
                    res++;
                    y--;
                }
            }
        }
        cout << res << '\n';
    }
    return 0;
}