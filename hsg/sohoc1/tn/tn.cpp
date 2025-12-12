#include <bits/stdc++.h>

using namespace std;
long long n, y[107], tmp, tlcm;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("tn.inp","r",stdin);
    freopen("tn.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> y[i];
    }
    tlcm = y[1];
    for (int i = 2; i <= n; i++){
        tmp = __gcd(tlcm, y[i]);
        tlcm = (tlcm * y[i]) / tmp;
    }
    cout << tlcm << '\n';
    for (int i = 1; i <= n; i++){
        cout << (tlcm / y[i]) << ' ';
    }
    return 0;
}