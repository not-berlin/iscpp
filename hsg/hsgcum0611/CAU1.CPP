#include <bits/stdc++.h>
using namespace std;

set <char> n, c, C;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU1.inp", "r", stdin);
    freopen("CAU1.out", "w", stdout);
    string s; cin >> s;
    cout << s.size() << '\n';

    for (char i : s) {
        if ('0' <= i && i <= '9') n.insert(i);
        else if ('A' <= i && i <= 'Z') C.insert(i);
        else if ('a' <= i && i <= 'z') c.insert(i);  
    }
    if (c.empty() || C.empty() || n.empty()) {
        cout << "NO";
        return 0;
    }
    cout << n.size() + c.size() + C.size() << '\n';
    for (auto i : C) cout << i;
    for (auto i : c) cout << i;
    for (auto i : n) cout << i;
    return 0;
}