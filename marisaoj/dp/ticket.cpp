#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int t[N], r[N], dp[N];

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) cin >> t[i];
  for (int i = 2; i <= n; i++) cin >> r[i];
  dp[1] = t[1];
  for (int i = 2; i <= n; i++)
    dp[i] = min(dp[i - 1] + t[i], dp[i - 2] + r[i]);
  cout << dp[n];
  return 0;
}