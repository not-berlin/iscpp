#include <bits/stdc++.h>
using namespace std;

string s;
int nb, ns, nc, pb, ps, pc;
int cb = 0, cs = 0, cc = 0;
long long rup;

bool check (long long k) {
  return (max(0LL, k * cb - nb) * pb) + (max(0LL, k * cs - ns) * ps) +(max(0LL, k * cc - nc) * pc) <= rup;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("humberger.inp", "r", stdin); 
  freopen("humberger.out", "w", stdout);

  cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> rup;
  for (char c : s) {
    if (c == 'B') cb++;
    else if (c == 'S') cs++;
    else cc++;
  }

  long long ans, l = 0, r = 2e15;
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