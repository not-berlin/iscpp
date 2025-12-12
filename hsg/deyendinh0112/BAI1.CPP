#include <bits/stdc++.h>
using namespace std;
double n;
string s[11] = {"0","1","10","11","100","101","110","111","1000","1001","1010"};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    int t; cin >> t;
    while (t--) {
        cin >> n;
        cout << s[(int)(n)];
        int d = (int)(n * 100) - (int)(n)*100;
        if (d == 25) cout << ".01";
        else if (d == 50) cout << ".1";
        else if (d == 75) cout << ".11";
        cout << '\n';
    }
    return 0;
}