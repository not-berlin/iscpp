#include <bits/stdc++.h>
using namespace std;

void check (int b[]) {
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      for (int k = 0; k <= 9; k++) {
        if (i == j || j == k || i == k) continue;
        if (b[i] == 0 || b[j] == 0 || b[k] == 0) continue;
        if ((i + j + k) % 10 == 9) {
          cout << "YES" << '\n';
          return;
        }
      }
    }
  }
  cout << "NO" << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("BAI2.inp", "r", stdin);
  freopen("BAI2.out", "w", stdout);
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[12];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++) {
      long long x; cin >> x;
      a[x % 10]++;
    }
    check(a);
  }
  return 0;
}