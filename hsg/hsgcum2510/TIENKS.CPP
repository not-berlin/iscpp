#include <bits/stdc++.h>
using namespace std;

struct kh {
  int a, b, c;
} x[12021];

int f[12021];

bool cmp (kh m, kh n) {
  if (m.b != n.b) return m.b < n.b;
  if (m.a != n.a) return m.a < n.a;
  return m.c < n.c;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("TIENKS.inp", "r", stdin);
  freopen("TIENKS.out", "w", stdout);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i].a >> x[i].b >> x[i].c;
  }
  sort (x + 1, x + n + 1, cmp);

  for (int i = 1; i <= n; i++) {
    f[i] = x[i].c;
    for (int j = 1; j < i; j++) {
      if (x[j].b <= x[i].a) f[i] = max(f[i], f[j] + x[i].c);
    }
  }
  
  cout <<  *max_element(f + 1, f + n + 1);
  return 0;
}