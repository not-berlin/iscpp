#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
map <int, int> mp;
int n, B, ans = 0;
int x;
int a[N+5];
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    // freopen("friend.inp","r",stdin);
    // freopen("friend.out","w",stdout);
    cin >> n >> B;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    sort (a + 1, a + n + 1);
    int u, l;
    for (int i = 1; i <= n; i++){
        l = lower_bound(a + i + 1, a + n + 1, B - a[i]) - a;
        u = upper_bound(a + i + 1, a + n + 1, B - a[i]) - a;
        ans += u - l;
    }
    cout << ans;
    return 0;
}