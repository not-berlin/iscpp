#include <bits/stdc++.h>
#define ll long long
const int N = 1e6;
using namespace std;
int p[N+6], x;
long long n, k;
void sang(){
    fill (p + 2, p + N + 2, 1);
    for (ll i = 2; i*i <= N; i++){
        if (p[i] == 1){
            for (int j = i*i; j <= N; j+=i) p[j] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("tnum.inp","r",stdin);
    freopen("tnum.out","w",stdout);
    cin >> x;
    while (x--){
        cin >> n;
        sang();
        k = sqrt(n);
        if (k*k == n && p[k] == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}