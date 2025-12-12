#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("BAI1.inp", "r", stdin);
  freopen("BAI1.out", "w", stdout);
  long long n; cin >> n;
  int ans;
  for (int i = 0; i * 5 <= n; i++) {
    if ((n - i * 5) % 4 == 0) ans++;
  }
  cout << ans;
  return 0;
}