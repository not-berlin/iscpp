#include <bits/stdc++.h>
const int N = 1000000;
using namespace std;
long long a[N+2];
int n, c[N+2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("doancon1.inp","r",stdin);
    freopen("doancon1.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    c[1] = 1;
    for (int i = 2; i <= n; i++){
        if (a[i] > a[i-1]) c[i] = c[i-1] + 1;
        else c[i] = 1;
    }
    cout << *max_element(c+1, c+n+1);
    return 0;
}

