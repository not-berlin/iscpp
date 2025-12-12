#include <bits/stdc++.h>

using namespace std;
#define ll long long
map<int, ll> mp; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DOANTH.INP", "r", stdin);
    freopen("DOANTH.OUT", "w", stdout);

    int n, k; cin >> n >> k;
    string s; cin >> s;
    mp[0] = 1;
    int cnt = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') cnt++;
        int j = cnt - k;
        if (mp.count(j)) ans += mp[j];
        mp[cnt]++;
    }
    cout << ans;
    return 0;
}
