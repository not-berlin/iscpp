#include <bits/stdc++.h>
using namespace std;
const int N = 500000;
long long s, t[N + 5];
int n;

bool check (int k){
  if (k == 0) return false;
  for (int i = k; i <= n; i++)
    if (t[i] - t[i - k] >= s) return true;
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("sub.inp", "r", stdin);
  freopen("sub.out", "w", stdout);

  cin >> n >> s;
  for (int i = 1; i <= n; i++){
    long long x; cin >> x;
    t[i] = t[i - 1] + x;
  }

  int l = 1, r = n;
  int ans = 0;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (check(mid)){
      ans = mid;
      r = mid - 1;
    }
    else l = mid + 1;
  }
  
  cout << ans;
  return 0;
}