#include <bits/stdc++.h>

using namespace std;

int sum (long long x) {
  int ans = 0;
  while (x != 0) {
    ans += x % 10;
    x /= 10;
  }
  return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU1.inp", "r", stdin);
  freopen("CAU1.out", "w", stdout);
  int res = 1;
  long long a, b;
  cin >> a >> b;
  long long g = __gcd(a, b);
  for (int i = 1; i * i <= g; i++) {
    if (g % i == 0) {
      res = max(res, sum(i));
      res = max(res, sum(g/i));
    }
  }
  cout << res;
  return 0;
}