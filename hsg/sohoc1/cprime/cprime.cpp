#include <bits/stdc++.h>
const int N = 1e6;
using namespace std;
int n;
int p[N+6]; 
int sdn (int x){
    int res = 0;
    while (x > 0){
        res = res*10 + x%10;
        x = x / 10;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("cprime.inp","r",stdin);
    freopen("cprime.out","w",stdout);
    cin >> n;
    fill (p + 2, p + n + 1, 1);
    n = max (n, sdn(n));
    for (int i = 2; i*i <= n; i++){
        if (p[i] == 1){
            for (int j = i*i; j <= n; j+=i) p[i] = 0;
        }
    }
    if (p[n] == 1 && p[sdn(n)] == 1) cout << '1';
    else cout << '0';
    return 0;
}