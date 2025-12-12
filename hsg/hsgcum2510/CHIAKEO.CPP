#include <bits/stdc++.h>
using namespace std;
long long a[200005];
const long long N = 2e12;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CHIAKEO.inp", "r", stdin);
  freopen("CHIAKEO.out", "w", stdout);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    long long x; cin >> x;
    a[i] = a[i - 1] + x;
  }
  long long ans = N;
  for (int i = 1; i < n; i++) {
    ans = min(ans, abs(a[i]*2 - a[n]));
  }
  cout << ans;
  return 0;
}