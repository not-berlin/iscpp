#include <bits/stdc++.h>
using namespace std;

set <char> n, c;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU1.inp", "r", stdin);
    freopen("CAU1.out", "w", stdout);
    string s; cin >> s;
    cout << s.size() << '\n';

    for (char i : s) {
        if ((int)i >= 48 && (int)i <= 57) n.insert(i);
        else c.insert(i);
    }
    cout << n.size() + c.size() << '\n';
    for (auto i : c) cout << i;
    for (auto i : n) cout << i;
    return 0;
}