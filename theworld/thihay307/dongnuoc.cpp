#include <bits/stdc++.h>
using namespace std;
long long n;

int main() {
  cin >> n;
  long long ans = n / 5, du = n % 5;
  if (du == 0) cout << ans;
  else if (du == 1) cout << ans + 1;
  else if (du == 2) cout << ans + 1;
  else if (du == 3) cout << ans + 1;
  else if (du == 4) cout << ans + 2;
  return 0;
}