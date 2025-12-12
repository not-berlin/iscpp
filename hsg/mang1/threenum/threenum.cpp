#include <bits/stdc++.h>
using namespace std;
long long a[100005],maxL[100005],maxR[100005];
int n, Smax;
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("threenum.inp","r",stdin);
    freopen("threenum.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    maxL[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        maxL[i] = max(maxL[i-1],a[i]);
    }
    maxR[n] = a[n];
    for (int i = n-1; i >= 0; i--)
    {
        maxR[i] = max(maxR[i+1],a[i]);
    }
    Smax = 0;
    for (int j  = 2; j <= n; j++)
    {
        int temp =2*maxL[j-1]-3*a[j]+5*maxR[j+1];
        Smax = max(Smax,temp);
    }
    cout << Smax;
    return 0;
}