#include <bits/stdc++.h>
using namespace std;
string a, b;
int x[126], y[126];
int res = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("AD.INP", "r", stdin);
    freopen("AD.OUT", "w", stdout);
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
        x[(int)a[i]]++;
    } 
    for (int i = 0; i < b.size(); i++){
        b[i] = tolower(b[i]);
        y[(int)b[i]]++;
    } 
    for (int i = 97; i <= 122; i++){
        res += abs(x[i] - y[i]);
    }
    cout << res;
    return 0;
}
