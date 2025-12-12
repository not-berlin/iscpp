#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU3.inp", "r", stdin);
  freopen("CAU3.out", "w", stdout);
  vector <int> vt;
  long long M; cin >> M;
  if (M == 0) {
    cout << 10;
    return 0;
  }
  if (M == 1) {
    cout << 1;
    return 0;
  }
  for (int i = 9; i >= 2; i--) {
    while (M % i == 0) {
      vt.push_back(i);
      M /= i;
    }
  }
  if (M != 1) {
    cout << -1;
    return 0;
  }
  sort (vt.begin(), vt.end());
  for (auto k : vt) cout << k;
  return 0;
}