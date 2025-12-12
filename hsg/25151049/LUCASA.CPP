#include <bits/stdc++.h>
using namespace std;
const int N = 45000;
long long a[N + 45];

bool check(long long n) {
  long long x = n*n;
  while (n > 0) {
    if (x % 10 != n % 10) return false;
    x /= 10; n /= 10;
  }
  return true;
}

void solve () {
  for (int i = 1; i <= N; i++) {
    if (check(i)) a[i] = a[i - 1] + 1;
    else a[i] = a[i - 1];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("LUCASA.inp", "r", stdin);
  freopen("LUCASA.out", "w", stdout);
  int k; cin >> k;
  a[0] = 0;
  solve();
  while (k--) {
    int l, r; cin >> l >> r;
    cout << a[r] - a[l - 1] << '\n';
  }
  return 0;
}
