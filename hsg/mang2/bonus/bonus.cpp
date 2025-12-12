#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
int a[N+2], b[N+2];
int m, n, w, h;
long long wmax = 0, hmax = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("bonus.inp","r",stdin);
    freopen("bonus.out","w",stdout);
    cin >> m >> n >> w >> h;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= w; i++)
        wmax += a[i];
    for (int i = 1; i <= h; i++) 
        hmax += b[i];
    long long tempa = wmax, tempb = hmax;
    for (int i = w + 1; i <= m; i++){
        tempa = tempa - a[i - w] + a[i];
        if (tempa > wmax) wmax = tempa;
    }
    for (int i = h + 1; i <= n; i++){
        tempb = tempb - b[i - h] + b[i];
        if (tempb > hmax) hmax = tempb;
    }
    cout << (h*wmax) + (w*hmax);
    return 0;
}