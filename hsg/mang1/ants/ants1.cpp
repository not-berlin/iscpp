#include <bits/stdc++.h>
#define N 100000
using namespace std;
long long n, k,  ans;
long long x[N+5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("ants.inp","r",stdin);
    freopen("ants.out","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> x[i];
    ans = 0;
    for (int i = 1; i <= n; i++)
        if (x[i]>0) ans =max(ans,k-x[i]);
        else ans =max(ans,abs(x[i]));
    cout << ans;
    return 0;
}