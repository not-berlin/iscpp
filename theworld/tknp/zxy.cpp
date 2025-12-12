#include <bits/stdc++.h>
using namespace std;
const int N = 15000;

int k, n;
long long a[N + 5];

bool check (long long M) {
  int box = 1;
  long long w = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] > M) return false;
    if (w + a[i] > M) {
      box++;
      w = a[i];
    }
    else w += a[i];
  }
  return box <= k;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("zxy.inp", "r", stdin);
  freopen("zxy.out", "w", stdout);

  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  long long l = 0, r = 0, ans;
  for (int i = 1; i <= n; i++){
    l = max (l, a[i]);
    r += a[i];
  }

  while (l <= r) {
    long long mid = l + (r - l) / 2;
    if (check(mid)) {
      ans = mid;
      r = mid - 1;
    }
    else l = mid + 1;
  }

  cout << ans;
  return 0;
}