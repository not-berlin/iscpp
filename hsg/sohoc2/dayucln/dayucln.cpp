#include <bits/stdc++.h>
// #define ll long long
using namespace std;
int a[100005];
int t, n;
int lcm(int x, int y){
    int tmp = __gcd(x, y);
    return (x*y)/tmp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("dayucln.inp","r",stdin);
    freopen("dayucln.out","w",stdout);
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        cout << a[1] << ' ';
        for (int i = 1; i < n; i++){
            cout << lcm(a[i], a[i+1]) << ' ';
        }
        cout << a[n] << '\n';
        fill (a + 1, a + n + 1, 0);
    }
    return 0;
}