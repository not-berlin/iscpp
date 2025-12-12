#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("strdel.inp", "r", stdin);
    freopen("strdel.out", "w", stdout);
    cin >> t;
    string s;
    while (t--){
        cin >> s;
        stack<char> stk;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'A') stk.push(s[i]);
            else {
                if(!stk.empty() && (stk.top() == 'A' || stk.top() == 'B')) 
                    stk.pop();
                else stk.push(s[i]);
            }
        }
        cout << stk.size() << '\n';
    }
    return 0;
}