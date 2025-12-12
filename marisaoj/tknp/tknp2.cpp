#include <bits/stdc++.h>
using namespace std;
const int N = 100000;

int main() {
  int a[N + 5];
  int n, q;
  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort (a + 1, a + n + 1);
  while (q--) {
    int x; cin >> x;
    if (binary_search(a + 1, a + n + 1, x)) {
      int it = lower_bound(a + 1, a + n + 1, x) - a;
      cout << it << '\n';
    }
    else cout << -1 << '\n';
  }
  return 0;
}