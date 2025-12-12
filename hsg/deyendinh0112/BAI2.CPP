#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;

long long a[N];

void  solve(string s, int p) {
    if (s.empty()) return;

    while (s.size() % 4 != 0) {
        if (p == 0) s = '0' + s;
        else s += '0';
    }
    for (int i = 0; i < s.size(); i += 4) {
        string t = s.substr(i, 4);
        unsigned long n = stoul(t, nullptr, 2);
        cout << hex << uppercase << n;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI2.inp", "r", stdin);
    freopen("BAI2.out", "w", stdout);
    string s, s1 = "", s2 = "";
    cin >> s;
    int i = 0;
    for (; i < s.size(); i++) {
        if (s[i] != '.') s1 += s[i];
        else {
            i++;
            break;
        }
    }
    for (; i < s.size(); i++) s2 += s[i];
    solve(s1, 0);
    if (!s2.empty()) {
        cout << '.';
        solve(s2, 1);
    }
    return 0;
}