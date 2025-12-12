#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;

int n, M;
long long a[N + 6];

bool check (long long H) {
  long long box = 0;
  for (int i = 1; i <= n; i++){
    if (a[i] > H) box += (a[i] - H);
  }
  return (box >= M);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("wood.inp", "r", stdin);
  freopen("wood.out", "w", stdout);

  cin >> n >> M;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  long long ans = 0, l = 0, r = *max_element(a + 1, a + n + 1);
  while (l <= r) {
    long long mid = l + (r - l) / 2;
    if (check(mid)) {
      ans = mid;
      l = mid + 1;
    }
    else r = mid - 1;
  }
  cout << ans;
  return 0;
}