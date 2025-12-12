#include <bits/stdc++.h>

using namespace std;
int t, n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("gcdmax.inp","r",stdin);
    freopen("gcdmax.out","w",stdout);
    cin >> t;
    while (t--){
        cin >> n;
        cout << n/2 << '\n';
    }
    return 0;
}