#include <bits/stdc++.h>
using namespace std;
int a[5005];

bool check (int m, int n) {
  int p = m ^ n;
  return (p == 0) || ((p & (p - 1)) == 0);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CITY.inp", "r", stdin);
  freopen("CITY.out", "w", stdout);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  int cnt = 0; 
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (check(a[i], a[j])) cnt++;
    }
  }
  cout << cnt;
  return 0;
}