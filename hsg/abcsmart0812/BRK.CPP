#include <bits/stdc++.h>
using namespace std;
stack <int> stk;
vector <pair<int, int>> vt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BRK.INP", "r", stdin);
    freopen("BRK.OUT", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        if(s[i] == '(') stk.push(i + 1);
        else if (s[i] == ')') {
            if(stk.empty()) {
                cout << "NO";
                return 0;
            }
            else {
                vt.push_back({stk.top(), i + 1});
                stk.pop();
            }
        }
    }
    if (!stk.empty()){
        cout << "NO";
        return 0;
    }
    cout << "YES" << '\n';
    sort(vt.begin(), vt.end());
    for (int i = 0; i < vt.size(); i++) cout << vt[i].second << ' '; 
    return 0;
}