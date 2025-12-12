#include <bits/stdc++.h>

using namespace std;
long long a[1000006];
long long n, d0 = 0, d1 = 0, t = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("ddelete.inp","r",stdin);
    freopen("ddelete.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t = t + a[i];
        if (a[i] % 2 == 0)
        {
            d0++;
        }
        else
        {
            d1++;
        }
    }
    if (t % 2 == 0)
    {
        cout << ((d0*(d0 - 1))/2) + ((d1*(d1 - 1))/2);
    }
    else
    {
        cout << d0*d1;
    }
    return 0;
}