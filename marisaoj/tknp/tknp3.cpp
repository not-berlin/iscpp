#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
long long a[N + 5];

int main() {
  int n, q;
  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  while (q--) {
    long long x; cin >> x;
    int l = 1, r = n;
    int ans = -1;
    while (l <= r) {
      int mid = l + (r - l)/2;
      if (a[mid] <= x) {
        ans = mid;
        l = mid + 1;
      }
      else r = mid - 1;
    }
    if (a[ans] <= x) cout << ans << '\n';
    else cout << - 1 << '\n';
  }
  return 0;
}