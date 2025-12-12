#include <bits/stdc++.h>

using namespace std;
long long b, n;
int res = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("fraction.inp","r",stdin);
    freopen("fraction.out","w",stdout);
    cin >> b >> n;
    for (long long m = 1; m <= 2*n; m++){
        if ((b * (m - n) * (m - n)) % (n * n) == 0)
            if (m != n) res++;
    }
    cout << res;
    return 0;
}