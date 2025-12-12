#include <bits/stdc++.h>
using namespace std;
int m;

int main() {
  cin >> m;
  while (m--) {
    int k, u, cnt = 0;
    cin >> u >> k;
    for (int i = 1; i * i <= u; i++) {
      if (u % i == 0) {
        if (i * i == u) cnt++;
        else cnt += 2;
      }
    } 

    if (k > cnt) {
      cout << -1 << '\n';
      continue;
    }

    int ans = 0;
    for (int i = 1; i * i <= u; i++) {
      if (u % i == 0) {
        ans++;
        if (ans == k) {
          cout << i << '\n';
          break;
        }
        else if (cnt - ans + 1 == k) {
          cout << u / i << '\n';
          break;
        }
      }
    }
  }
  return 0;
}