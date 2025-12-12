#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("TENGOI.inp", "r", stdin);
  freopen("TENGOI.out", "w", stdout);
  int n; cin >> n;
  int ans = 0, cnt = 0;
  while (n--) {
    string t; cin >> t;
    int s1 = 0;
    for (int i = 0; i < t.size(); i++) {
      if (t[i] == 'W' || t[i] == 'A' || t[i] == 'R') {
        if (s1 > ans) {
          ans = s1;
          cnt = 1;
        }
        else if (s1 == ans && ans > 0) cnt++;
        s1 = 0;
      }
      else s1++;
    }
    if (s1 > ans) {
      ans = s1;
      cnt = 1;
    }
    else if (s1 == ans) cnt++;
  }
  if (ans == 0) cout << "NO";
  else cout << ans << ' ' << cnt;
  return 0;
}

