#include <bits/stdc++.h>
using namespace std;
int n;
long long t1, t2, ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU2.INP", "r", stdin);
  freopen("CAU2.OUT", "w", stdout);

  cin >> n;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    t1 += x;
    t2 += x * x;
  }

  ans = (t1 * t1 - t2) / 2;
  cout << ans;  
  return 0;
}