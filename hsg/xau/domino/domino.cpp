#include <bits/stdc++.h>
using namespace std;
int t, n;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DOMINO.INP", "r", stdin);
    freopen("DOMINO.OUT", "w", stdout);
    cin >> t;
    while (t--){
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++){
            if (s[i] == 'U') cout << 'D';
            else if (s[i] == 'D') cout << 'U';
            else if (s[i] == 'L' || s[i] == 'R') cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}