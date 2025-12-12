#include <bits/stdc++.h>
const int N = 100000;
const int tmp = 1e9;
using namespace std;
int n;
int b[N + 5], r[N + 5];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int ans = tmp;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> b[i];
  for (int i = 1; i <= n; i++) cin >> r[i];
  sort (b + 1, b + n + 1);
  sort (r + 1, r + n + 1);
  int i = 1, j = 1;
  while (i <= n && j <= n){
    if (b[i] < r[j]) {
      ans = min(ans,  abs(b[i] - r[j]));
      i++;
    }
    else if (b[i] > r[j]) {
      ans = min(ans, abs(b[i] - r[j]));
      j++;
    }
    else {
      ans = 0;
      break;
    }
  }
  cout << ans;
  return 0;
}