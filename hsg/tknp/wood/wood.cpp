#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
long long n, m, a[N+5], ans;
bool check (int h){
    long long s = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] > h) s += (a[i] - h);
    }
    return s >= m;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("wood.inp","r",stdin);
    freopen("wood.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = 0, r = *max_element(a + 1, a + n + 1);
    int mid;
    while (l <= r){
        mid = (l + r) / 2;
        if (check(mid)){
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << ans;
}