#include <bits/stdc++.h>
using namespace std;
const int N = 100009;
vector <long long> a;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("BASE.inp", "r", stdin);
  freopen("BASE.out", "w", stdout);
  long long n, q; cin >> n >> q;
  for (long long i = 1; i <= n; i++) {
    long long x, y; cin >> x >> y;
    a.push_back(x*x + y*y);
  }
  sort(a.begin(), a.end());
  while (q--) {
    long long r; cin >> r;
    r *= r;
    long long ans = upper_bound(a.begin(), a.end(), r) - a.begin();
    cout << ans << '\n';
  }
  return 0;
}