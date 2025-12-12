#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
int n, m, ans, k;
int c[N+5];
void pt(int a){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("analyse.inp","r",stdin);
    freopen("analyse.out","w",stdout);
    for (int i = 2; i * i <= a; i++){
        while (a % i == 0){
            c[i]++;
            a /= i;
        }
        k = max (k, i);
    }
    if (a != 1) c[a]++;
    k = max(k, a);
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) pt(i);
    for (int i = 1; i <= k; i++){
        if (c[i] > 0) cout << c[i] << ' ';
    }
    return 0;
}