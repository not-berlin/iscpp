#include <bits/stdc++.h>

using namespace std;
int a[100005];
int n, p;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("bkid.inp","r",stdin);
    freopen("bkid.out","w",stdout);
    cin >> n;
    cin >> a[1];
    p = 1;
    for (int i = 2; i <= n; i++)
    { 
        cin >> a[i];
        if (a[p] > a[i])
        {
            cout << p << '\n';
            p = i;
        }
        if (a[p] < a[i])
        {
            cout << i << '\n';
        }
    }
    return 0;    
}