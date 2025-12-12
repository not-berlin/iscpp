#include <bits/stdc++.h>

using namespace std;

void solve() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // freopen("CAU1.INP", "r", stdin);
    // freopen("CAU1.OUT", "w", stdout);

    long long aa = 601457356367488350, bb = 895905014178099479;
    long long q = aa / bb;
    long long rem = aa % bb;  
    long long dd = (long long)(((long double)rem * 100.0) / bb); 

    if (dd == 0) {
        cout << q << endl;
    } else {
        cout << q;
        cout << ".";
        
        if (dd < 10) {
            cout << "0";
        }
        cout << dd << endl;
    }
}

int main() {
    solve();
    return 0;
}