#include <bits/stdc++.h>
using namespace std;
string s;
int t, n;
int x, y, res;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("MBRACKETS.INP", "r", stdin);
    freopen("MBRACKETS.OUT", "w", stdout);
    cin >> t;
    while (t--){
        x = 0; y = 0; res = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++){
            if (s[i] == '(') x++;
            else if (s[i] == ')'){
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