#include <bits/stdc++.h>
using namespace std;
long long p, n, s;
int k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("forage.inp","r",stdin);
    freopen("forage.out","w",stdout);
    cin >> p >> n >> k;
    s = (n*(2*k + k*(n-1))) / 2;
    if (s > p) cout << "NO" << '\n' << s-p;
    else cout << "YES";
    return 0;
}