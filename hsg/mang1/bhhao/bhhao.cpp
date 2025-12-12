#include <bits/stdc++.h>

using namespace std;
long long total(long long x)
{
    int t;
    long long temp  = 0;
    while (x > 0)
    {
        t = x % 10;
        temp = temp + t;
        x = x/10;
    }
    return temp;
} 

bool check_shh(long long d)
{
    if (d <= 0)
    {
        return false;
    }
    long long k = 0;
    for (long long i = 1; i <= ((d/2)+1); i++)
    {
        if(d % i == 0)
        {
            k = k + i;
        }
    }
    if (k == d)
    {
        return true;
    }
    else
        return false;
}

int n;
long long a[10006], ans = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("bhhao.inp","r",stdin);
    freopen("bhhao.out","w",stdout);
    cin >> n;
    for (int i =1; i <= n; i++)
    {
        cin >> a[i];
        long long k = total(a[i]);
        if (check_shh(k))
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}