#include <bits/stdc++.h>
using namespace std;
int n, c, o, w;
unsigned long long res;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CWORD.INP", "r", stdin);
    freopen("CWORD.OUT", "w", stdout);
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == 'C') c++;
        else if (s[i] == 'O') o++;
        else if (s[i] == 'W') w++;
    }
    res = c * o * w;
    cout << res;
    return 0;
}