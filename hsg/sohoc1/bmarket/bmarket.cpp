#include <bits/stdc++.h>

using namespace std;
long long y, k, n, z;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("bmarket.inp","r",stdin);
    freopen("bmarket.out","w",stdout);
    cin >> y >> k >> n;
    z = (y/k) + 1;
    y += z;
    if (y > n) cout << -1;
    else {
        cout << z << ' ';
        while (y + z <= n){
            z += k;
            if (y + z <= n) cout << z << ' ';
            else break;
        }
    }
    return 0;
}
