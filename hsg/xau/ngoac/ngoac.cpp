#include <bits/stdc++.h>

using namespace std;
string s;
int x = 0, y = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("ngoac.inp", "r", stdin);
    freopen("ngoac.out", "w", stdout);
    getline (cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == '(') x++;
        else if (s[i] == ')'){
            y++;
            if (x < y) {
                cout << "KHONG DUNG";
                return 0;
            }
        }
        else {
            cout << "KHONG HOP LE";
            return 0;
        }
    }
    if (x == y) cout << "DUNG";
    else cout << "KHONG DUNG";
    return 0;
}