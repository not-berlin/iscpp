#include <bits/stdc++.h>
using namespace std;
vector <string> vt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("MINS.INP", "r", stdin);
    freopen("MINS.OUT", "w", stdout);
    string s; cin >> s;
    int k = 0;
    vt.resize(s.size());
    for (int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            if (s[i] != '0') vt[k].push_back(s[i]);
            else {
                if (!vt[k].empty())vt[k].push_back(s[i]);
            }
        }
        else k++;
    }
    string res = "";
    for (int i = 0; i < 100000 + 5; i++) res += '9';
    for (string c : vt) if (c < res && (c[c.size() - 1] - '0') % 2 == 1) res = c;
    cout << res;
    return 0;
}