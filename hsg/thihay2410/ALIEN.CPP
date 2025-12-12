#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("ALIEN.INP", "r", stdin);
  freopen("ALIEN.OUT", "w", stdout);
  long long x1, y1, x2, y2, x3, y3;
  double A, B, C, r1, r2, r3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  A = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
  B = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
  C = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
  r1 = (A + C - B) / 2;
  r2 = (A + B - C) / 2;
  r3 = (B + C - A) / 2;
  cout << fixed << setprecision(3) << r1 << ' ' << r2 << ' ' << r3;
  return 0;
}