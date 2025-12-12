#include <bits/stdc++.h>
#define a first
#define b second
using namespace std;
pair <int, int> p[1003];
bool c[1003];

bool cmp (pair <int, int> x, pair <int, int> y) {
  return x.b > y.b;
}

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) cin >> p[i].a;
  for (int i = 1; i <= n; i++) cin >> p[i].b;
  sort (p + 1, p + n + 1, cmp);
  memset (c, 0, sizeof(c));
  int ans = 0;

  for (int i = 1; i <= n; i++) {
    bool check = false;
    for (int j = p[i].a; j >= 1; j--) {
      if (!c[j]) {
        c[j] = true;
        check = true;
        break;
      }
    }
    if (!check) ans += p[i].b;
  }
  cout << ans;
  return 0;
}