#include <bits/stdc++.h>
using namespace std;
int l, r;
int ans = 0;
int spp (int n){
    int s = 1;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            s += i;
            if (i * i != n){
                s += n / i;
            }
        }
    }
    return s;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("begin14.inp", "r", stdin);
    freopen("begin14.out", "w", stdout);
    cin >> l >> r;
    for (int i = l; i <= r; i++){
        if (spp(i) > i){
            ans++;
        }
    }
    cout << ans;
    return 0;
}