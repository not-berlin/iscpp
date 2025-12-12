#include <bits/stdc++.h>
using namespace std;
long long x, y, n;
int t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("bai9.INP", "r", stdin);
    freopen("bai9.OUT", "w", stdout);
    cin >> t;
    while(t--){
        cin >> n;
        x = n + 1;
        y = 2*n + 1;
        cout << (n*x*y)/6 << '\n';
    }
    return 0;
}