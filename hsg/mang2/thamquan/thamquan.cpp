#include <bits/stdc++.h>
#define N 30000
using namespace std;
int d[N+2], v[N+2];
int n, m;
long long t = 0;
bool cmp (int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("thamquan.inp","r",stdin);
    freopen("thamquan.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){ 
        cin >> d[i];
    }
    for (int j = 1; j <= m; j++){
        cin >> v[j];
    }
    sort (d + 1, d + n + 1, cmp);
    sort (v + 1, v + m + 1);
    for (int i = 1; i <= n; i++){
        t = t + (d[i]*v[i]);
    }
    cout << t;
    return 0;
}