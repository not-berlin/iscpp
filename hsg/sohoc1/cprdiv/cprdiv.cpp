#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
int n, m, ans, k;
int c[N+5];
void pt(int a, int b){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("cprdiv.inp","r",stdin);
    freopen("cprdiv.out","w",stdout);
    for (int i = 2; i * i <= a; i++){
        while (a % i == 0){
            c[i] += b;
            a /= i;
        }
        k = max (k, i);
    }
    if (a != 1) c[a] += b;
    k = max(k, a);
}
int main(){
    cin >> n >> m;
    for (int i = 2; i <= n; i++) pt(i, 1);
    for (int i = 2; i <= m; i++) pt(i, -1);
    for (int i = 2; i <= n - m; i++) pt(i, -1);
    for (int i = 2; i <= k; i++) ans += c[i];
    cout << ans;
    return 0;
}