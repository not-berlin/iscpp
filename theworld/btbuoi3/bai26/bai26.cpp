#include <bits/stdc++.h>
using namespace std;
long long n, cnt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("bai26.inp", "r", stdin);
    freopen("bai26.out", "w", stdout);
    while (cin >> n){
        cnt = 0;
        for (int i = 2; i * i <= 2 * n; i++){
            if ((2 * n) % i == 0 && (i + (2*n)/i - 1) % 2 == 0) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}