#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU1.inp", "r", stdin);
  freopen("CAU1.out", "w", stdout);
  int n; cin >> n;
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    long long x; cin >> x;
    ans += x;
    cout << ans << ' ';
  }
  return 0;
}