#include <bits/stdc++.h>

using namespace std;

int n, a[1005];
int ans = 0;

bool checkbt(long long t)
{
    if (t < 10)
    {
        return false;
    }
    long long temp, k;
    k = t%10;
    t = t/10;
    while (t>0)
    {
        temp = t%10;
        if (temp > k)
        {
            return false;
        }
        t = t/10;
        k = temp;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("step.inp","r",stdin);
    freopen("step.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (checkbt(a[i])== true)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
