#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU2.inp", "r", stdin);
  freopen("CAU2.out", "w", stdout);
  int t; cin >> t;
  while (t--) {
    int n, M;
    cin >> n >> M;
    long long a[10004];
    memset(a, 0 , sizeof(a));
    map <long long, bool> mp;
    for (int i = 1; i <= M; i++) {
      cin >> a[i];
      a[i] += a[i - 1];
      mp[a[i]] = true;
    }

    bool check = true;
    for (int i = 1; i <= M; i++) {
      if (a[M] % a[i] == 0) {
        for (long long j = 1; j <= a[M]/a[i]; j++) {
          check = true;
          if (!mp[a[i] * j]) {
            check = false;
            break;
          }
        }
        if (check) {
          cout << n << ' ' << a[i] << '\n';
          break;
        }
      }
    }
  }
}