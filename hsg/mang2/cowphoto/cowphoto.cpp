#include <bits/stdc++.h>
#define N 1000
using namespace std;
int n, k, p, ans = 2;
struct capbo
{
    int l;
    int r;
};
capbo a[N+2];
bool cmp(capbo a, capbo b){
    return a.r < b.r;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("cowphoto.inp","r",stdin);
    freopen("cowphoto.out","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= k; i++){
        cin >> a[i].l >> a[i].r;
        if (a[i].l > a[i].r) swap (a[i].l, a[i].r);
    }
    sort (a + 1, a + k + 1, cmp);
    p = a[1].r - 1;
    for (int i = 2; i <= k; i++){
        if (a[i].l > p){
            p = a[i].r - 1;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
