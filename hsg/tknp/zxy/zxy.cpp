#include <bits/stdc++.h>
const int N = 15000;
using namespace std;
int n, k;
long long ans;
int a[N+15];
bool check(long long x){
    int b = 0, c = 1;
    for (int i = 1; i <= n; i++) {
        if (b + a[i] <= x) b += a[i];
        else{
            c++;
            b = a[i];
            if (c > k) return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("zxy.inp","r",stdin);
    freopen("zxy.out","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = *max_element(a + 1, a + n + 1);
    long long r = 0, mid;
    for (int i = 1; i <= n; i++) r += a[i];
    ans = r;
    while (l <= r){
        mid = (l + r)/2;
        if (check(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}