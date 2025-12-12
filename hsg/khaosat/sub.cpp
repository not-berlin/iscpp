#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("SUB.inp", "r", stdin);
  freopen("SUB.out", "w", stdout);
  long long a, b;
  string c;
  cin >> a >> b >> c;
  string d = to_string(a - b);
  for (int i = 0; i < c.size(); i++) {
    if (d[i] != c[i]) {
      cout << c[i];
      break;
    }
  }
  return 0;
}