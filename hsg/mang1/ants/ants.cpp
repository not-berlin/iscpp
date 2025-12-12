#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
long long n, k, amax;
long long a[N+5];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("ants.inp","r",stdin);
    freopen("ants.out","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    amax = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] > 0) amax = max(amax,k - a[i]);
        else amax = max(amax,abs(a[i]));
    }
    cout << amax;
    return 0;
}