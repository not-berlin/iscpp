#include <bits/stdc++.h>
using namespace std;
int a[100005], s[100005];
int n, q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("qsum.inp","r",stdin);
    freopen("qsum.out","w",stdout);
    cin >> n >> q;
    s[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i = 1; i <= q; i++)
    {
        int x, y;
        cin >> x >> y;
        int t = s[y] - s[x-1];
        cout << t << '\n';
    }
    return 0;
}