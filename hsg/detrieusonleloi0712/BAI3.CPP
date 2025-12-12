#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    int n, k; cin >> n >> k;
    vector<vector<int>> a(k);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i % k].push_back(x);
    }
    long long ans = 0;

    for (int i = 0; i < k; i++) {
        sort(a[i].begin(), a[i].end());
        int sz = a[i].size();
        int m = a[i][sz / 2];
        for (int x : a[i]) ans += abs(x - m);
    }

    cout << ans;
    return 0;
}