#include <bits/stdc++.h>
#define ll long long
const int N = 40000;
using namespace std;
int c[N+6], ans;
long long k;
int pt(ll x){
    for (ll i = 2; i*i <= x; i++){
        while (x % i == 0){
            x /= i;
            c[i]++;
        }
    }
    if (x == 1) return 1;
    if (x > 1){
        if (x <= N){
            c[x]++;
            return 1;
        }
        else return x;
    }
}
int t;
long long a, b;
long long a1, b1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("uocso.inp","r",stdin);
    freopen("uocso.out","w",stdout);
    cin >> t;
    while (t--){
        fill (c, c + N + 1, 0);
        ans = 1;
        cin >> a >> b;
        a1 = pt(a);
        b1 = pt(b);
        for (int i = 2; i <= N; i++) ans *= (c[i] + 1);
        if (a1 > 1 && b1 > 1){
            if (a1 == b1) ans *= 3;
            else ans *= 4;
        }
        else if (a1 > 1) ans *= 2;
        else if (b1 > 1) ans *= 2;
        cout << ans << '\n';
        
    }
    return 0;
}