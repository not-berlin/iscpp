#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);

    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll res = 0;
    for(int i = 0; i < n - 2; i++) {
        ll tar = k - a[i];
        int l = i + 1;
        int r = n - 1;
        while(l < r) {
            ll sum = (ll)a[l] + a[r];
            if(sum == tar) {
                if(a[l] == a[r]) {
                    ll c = r - l + 1;
                    res += c * (c - 1) / 2;
                    break;
                } else {
                    int c1 = 1, c2 = 1;
                    while(l + 1 < r && a[l] == a[l+1]) { c1++; l++; }
                    while(r - 1 > l && a[r] == a[r-1]) { c2++; r--; }
                    res += (ll)c1 * c2;
                    l++; r--;
                }
            } else if(sum < tar) l++;
            else r--;
        }
    }
    cout << res;
    return 0;
}