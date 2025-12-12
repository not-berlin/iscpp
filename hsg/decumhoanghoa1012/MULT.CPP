#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("MULT.INP", "r", stdin);
    freopen("MULT.OUT", "w", stdout);
    int t; cin >> t;
    while(t--) {
        unsigned long long n, x;
        cin >> n >> x;
        cout << x / n << '\n';
    }
    return 0;
}