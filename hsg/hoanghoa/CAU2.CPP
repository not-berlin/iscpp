#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
long long d[4];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU2.inp", "r", stdin);
  freopen("CAU2.out", "w", stdout);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    d[x % 3]++;
  }
  long long ans = (d[0] * (d[0] - 1))/2 + (d[1] * d[2]);
  cout << ans;
  return 0;
}