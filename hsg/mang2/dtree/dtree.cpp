#include <bits/stdc++.h>
#define N 2000
using namespace std;
pair <int, int> a[N+2];
int t, n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("dtree.inp","r",stdin);
    freopen("dtree.out","w",stdout);
    cin >> t;
    while (t--){
        cin >> n;
        int p = 0;
        for (int i = 1; i <= n; i++){
            int x, r;
            cin >> x >> r;
            a[++p] = make_pair(x-r,0);
            a[++p] = make_pair(x+r,1);
        }
        sort(a + 1, a + n*2 + 1);
        int d = 1;
        int ans = 0;
        for (int i = 2; i <= n*2; i++){
            if (d > 0) ans += (a[i].first - a[i-1].first);
            if (a[i].second == 0 && a[i].first != a[i-1].first) d++;
            else d--;
        }
        cout << ans << '\n';
    }
    return 0;
}