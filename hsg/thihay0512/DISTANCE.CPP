#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DISTANCE.inp", "r", stdin);
    freopen("DISTANCE.out", "w", stdout);
    string x, y;
    cin >> x >> y;
    int n = x.size();
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int tmp = abs((x[i] - '0') - (y[i] - '0'))%10;
        ans += min(tmp, 10 - tmp)%10;
    }
    cout << ans;
    return 0;
}