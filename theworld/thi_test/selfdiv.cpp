#include <bits/stdc++.h>
using namespace std;
int l, r;
vector <int> vt;

bool work (int a) {
  int at, aa = a;
  while (a > 0) {
    at = a % 10;
    if (at == 0) return false;
    if (aa % at != 0) return false;
    a /= 10;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio (false);
  cin.tie(NULL);
  int ans = 0;
  cin >> l >> r;
  for (int i = l; i <= r; i++) {
    if (work(i)) {
      vt.push_back(i);
      ans++;
    }
  }
  cout << ans << '\n';
  for (auto i : vt) cout << i << " ";
  return 0;
}