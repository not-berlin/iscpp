#include <bits/stdc++.h>
const int N = 1000000;
using namespace std;
int a[N+2];
int n, f[N+2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("doancon2.inp","r",stdin);
    freopen("doancon2.out","w",stdout);
    cin >> n;
    f[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++){
        if((a[i] > 0 && a[i-1] < 0) || (a[i] < 0 && a[i-1] > 0)) f[i] = f[i-1] + 1;
        else f[i] = 1;
    }
    cout << *max_element(f+1, f+n+1);
}
