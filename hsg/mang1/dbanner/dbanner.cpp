#include <bits/stdc++.h>

using namespace std;

int n, x;
long long mi, s, s0;
long long a[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("dbanner.inp","r",stdin);
    freopen("dbanner.out","w",stdout);
    cin >> n;
    cin >> a[1];
    mi = a[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < mi) mi = a[i];
    }
    s = mi*n;
    for (int i = 1; i <= n; i++)
    {
        int temp = a[i];
        x = 0;
        for (int j = 1; j <= n; j++)
        {
            if (temp <= a[j])
            {
                x++;
                s0 = x*temp;
                if (s0 > s) s = s0;
            }
            else 
            {
                x = 0;
            }
        }
    }
    cout << s;
    return 0;
}