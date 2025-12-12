#include<bits/stdc++.h>
using namespace std;
int n, i, a[1003],b[1003], c[1003], j, k, p, res;

int main()
{
    cin >> n;
    for(i = 1; i <= n; i++) cin >> a[i];
    for(i = 1; i <= n; i++) cin >> b[i];
    for(i = 1; i <= n; i++) cin >> c[i];
    sort(c+1, c+n+1);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            k = upper_bound(c+1, c+n+1, abs(a[i] - b[j])) - c;
            p = lower_bound(c+1, c+n+1, a[i] + b[j]) - c;
            if(p >= 1 && p <= n && k >= 1 && k <= n && p-k >= 0) res += p-k;
            if(p > n && c[n] < a[i] + b[j]) res += n-k+1;
        }
    }
    cout << res;
}    
