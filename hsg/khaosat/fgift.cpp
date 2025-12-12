#include <bits/stdc++.h>
using namespace std;
const int M = 300005;
long long a[M];
long long n, m;

bool check (long long x) {
  long long s = 0;
  for (long long i = 1; i <= m; i++) {
    s += (a[i] + x - 1) / x;
    if (s > n) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("FGIFT.inp", "r", stdin);
  freopen("FGIFT.out", "w", stdout);
  cin >> n >> m;
  for (int i = 1; i <= m; i++) cin >> a[i];
  long long l = 1, r = 1e9, ans = -1;
  while (l <= r) {
    long long mid = l + (r - l)/2;
    if (check(mid)) {
      ans = mid;
      r = mid - 1;
    }
    else l = mid + 1;
  }
  cout << ans;
  return 0;
}