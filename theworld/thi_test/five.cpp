#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("FIVE.INP", "r", stdin);
  freopen("FIVE.OUT", "w", stdout);

  int n = 1, ans = 0;
  for (int i = 1; i <= 5; i++) {
    int x; cin >> x;
    if (x == 1) {
      ans += i * n;
      n *= 10;
    }
  }

  cout << ans;
  return 0;
}