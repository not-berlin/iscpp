#include <bits/stdc++.h>
using namespace std;

struct td{
  int x; int y; int z;
} a[100005];

bool cmp (td m, td n) {
  if (m.x != n.x) return m.x < n.x;
  if (m.y != n.y) return m.y < n.y;
  return m.z < n.z;
}

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i].x >> a[i].y >> a[i].z;
  }
  sort (a + 1, a + n + 1, cmp);
  for (int i = 1; i <= n; i++) {
    cout << a[i].x << ' ';
    cout << a[i].y << ' ';
    cout << a[i].z << ' ';
    cout << '\n';
  }
  return 0;
}