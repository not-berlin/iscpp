#include <bits/stdc++.h>
using namespace std;
const long long N = 1e9 + 7;
long long dp[100005];
int main() {
  int n; cin >> n;
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % N;
  }
  cout << dp[n];
  return 0;
}