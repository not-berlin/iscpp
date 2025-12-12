#include <bits/stdc++.h>
using namespace std;
int n, x;
string a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("domino.inp", "r", stdin);
    freopen("domino.out", "w", stdout);
    cin >> n;
    while(n--){
        cin >> x;
        cin >> a;
        for (int i = 0; i < x; i++){
            if (a[i] == 'U') cout << 'D';
            else if (a[i] == 'D') cout << 'U';
            else cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}