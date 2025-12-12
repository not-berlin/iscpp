#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("dayucln.inp", "r", stdin);
  freopen("dayucln.out", "w", stdout);
  int n, t;
  cin >> t;
  while (t--) {
    cin >> n;
    int f, s;
    cin >> f; cout << f << ' ';
    for (int i = 2; i <= n; i++) {
      cin >> s;
      cout << (f*s) / __gcd(f, s) << ' ';
      f = s;
    }
    cout << s << '\n';
  }
  return 0;
}