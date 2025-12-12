#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int n;
long long a[N+2], t = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("insul.inp","r",stdin);
    freopen("insul.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        t = t + a[i];
    }
    sort(a+1,a+n+1);
    for (int i = 1; i <= n/2; i++){
        t = t + (a[n-i+1] - a[i]);
    }
    cout << t;
    return 0;
}