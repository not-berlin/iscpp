#include <bits/stdc++.h>
const int N = 5*100000;
using namespace std;
long long a[N+2], c[N+2], S = 0, t = 0;
int n, ans = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("subarr.inp","r",stdin);
    freopen("subarr.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        S += a[i];
    }
    if (S % 3 != 0){
        cout << '0';
        return 0;
    }
    S = S / 3;
    for (int j = n; j > 0; j--){
        t += a[j];
        if (t == S) c[j] = c[j+1] + 1;
        else c[j] = c[j+1];
    }
    t = 0;
    for (int i = 1; i <= n-2; i++){
        t += a[i];
        if (t == S) ans += c[i+2];
    }
    cout << ans;
    return 0;
}