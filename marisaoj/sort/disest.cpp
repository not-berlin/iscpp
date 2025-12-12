#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
long long x[N], y[N];

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
  sort (x + 1, x + n + 1);
  sort (y + 1, y + n + 1);
  int xM = x[(n + 1) / 2], yM = y[(n + 1) / 2];
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += abs(xM - x[i]) + abs(yM - y[i]);
  }
  cout << ans;
  return 0;
}