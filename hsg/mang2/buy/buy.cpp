#include <bits/stdc++.h>
#define N 10000
using namespace std;
struct cuahang{
    int id;
    int a;
    int b;
};
cuahang c[N + 2];
int m, n;
bool cmp_b (cuahang x, cuahang y){
    return x.b < y.b;
}
bool cmp_id (cuahang x, cuahang y){
    return x.id < y.id;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("buy.inp","r",stdin);
    freopen("buy.out","w",stdout);
    cin >> m >> n;
    for (int i = 1; i <= n; i++){
        cin >> c[i].a >> c[i].b;
        c[i].id = i;
    }
    sort(c+1, c+n+1, cmp_b);
    int ans = 0, t = 0, k;
    for (int i = 1; i <= n; i++){
        if (ans + c[i].a <= m){
            ans = ans + c[i].a;
            t = t + (c[i].a * c[i].b);
        } 
        else{
            c[i].a = m - ans;
            t = t + (c[i].a * c[i].b);
            k = i + 1;
            break;
        }
    }
    for (int i = k; i <= n; i++){
        c[i].a = 0;
    }
    cout << t << '\n';
    sort (c+1, c+n+1, cmp_id);
    for (int i = 1; i <= n; i++){
        cout << c[i].a << '\n';
    }
    return 0;
}