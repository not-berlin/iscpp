#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 5;
int a[100005];

int main() {
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) cin >> a[i];
  sort (a + 1, a + n + 1);
  int l = 1, r = n, ans = 0;
  while (l <= r) {
    if (a[l] + a[r] <= k) {
      l++;
      r--;
    }
    else r--;
    ans++;
  }
  cout << ans;
  return 0;
}