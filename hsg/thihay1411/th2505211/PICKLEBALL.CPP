#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("PICKLEBALL.inp", "r", stdin);
    freopen("PICKLEBALL.out", "w", stdout);
    long long n, ans;
    cin >> n;
    ans = 3*n*(n - 1) + 1;
    cout << ans;
    return 0;
}