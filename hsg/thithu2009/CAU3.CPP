#include <bits/stdc++.h>
using namespace std;
int f[1000006], g[1000006];

bool check (char x) {
  return ((x == 'A') || (x == 'E') || (x == 'I') || (x == 'O') || (x == 'U') || (x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU3.inp", "r", stdin);
  freopen("CAU3.out", "w", stdout);
  int ans = 0;
  string s; cin >> s;
  int n = s.size();
  s = ' ' + s;
  for (int i = 1; i <= n; i++) {
    if (check(s[i])) {
      f[i] = f[i - 1] + 1;
      g[i] = g[i - 1];
    }
    else {
      f[i] = f[i - 1];
      g[i] = g[i - 1] + 1;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (check(s[i])) ans += g[n] - g[i];
    else ans += f[n] - f[i];
  }
  cout << ans;
  return 0;
}