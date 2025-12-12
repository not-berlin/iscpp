#include <bits/stdc++.h>
using namespace std;
int n, a[1002], f[1002];

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  int res = 1;
  for (int i = 1; i <= n; i++) {
    f[i] = 1;
    for (int j = 1; j < i; j++) {
      if (a[j] <= a[i]) f[i] = max(f[i], f[j] + 1);
    }
    res = max(res, f[i]);
  }
  cout << res;
  return 0;
}