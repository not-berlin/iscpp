#include <bits/stdc++.h>
using namespace std;
int q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("nicestr.inp", "r", stdin);
    freopen("nicestr.out", "w", stdout);
    cin >> q;
    string s;
    int a = 0, b = 0;
    while(q--){
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'a') a++;
            else b++;
        }
        if (a != b) cout << 1;
        else cout << 2;
        cout << '\n';
    }
    return 0;
}