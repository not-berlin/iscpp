#include <bits/stdc++.h>
using namespace std;
const int N = 100000;

int n;
int main() {
  long long B, a[N + 5];
  int ans = 0;
  cin >> n >> B;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++) {
    long long tmp = B - a[i];
      long long l = lower_bound(a + i + 1, a + n + 1, tmp) - a;
      long long r = upper_bound(a + i + 1, a + n + 1, tmp) - a - 1;
      ans += r - l + 1;
  }
  cout << ans;
  return 0;
}