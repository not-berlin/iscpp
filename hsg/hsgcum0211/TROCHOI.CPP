#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("TROCHOI.inp", "r", stdin);
  freopen("TROCHOI.out", "w", stdout);
  long long m, n, x, y;
  cin >> m >> n >> x >> y;
  long long l = x / __gcd(x, y) * y;
  long long ans = (n / l) - ((m - 1) / l);
  cout << ans;
  return 0;
}