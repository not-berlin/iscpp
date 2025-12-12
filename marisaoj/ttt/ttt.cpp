#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
long long a[N + 5], s[N + 5];

int main() {
  int n, q;
  cin >> n >> q;
  s[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    s[i] = s[i - 1] + a[i];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << s[r] - s[l - 1] << '\n';
  }
  return 0;
}