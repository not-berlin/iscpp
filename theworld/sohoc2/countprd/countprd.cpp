#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("countprd.inp", "r", stdin);
  freopen("countprd.out", "w", stdout);
  long long n;
  cin >> n;
  int cnt = 0;
  if (n % 2 == 0){
    cnt++;
    while (n % 2 == 0) n /= 2;
  }
  for (int i = 3; i * i <= n; i += 2){
    if (n % i == 0){
        cnt++;
        while (n % i == 0) n /= i;
    }
  }
  if (n > 1) cnt++;
  cout << cnt;
  return 0;
}