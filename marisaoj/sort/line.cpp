#include <bits/stdc++.h>
using namespace std;
#define fir first
#define sec second

pair <int, int> a[100005];

bool cmp (pair<int, int> x, pair<int, int> y) {
  return x.sec < y.sec;
}

int main() {
  int ans = 0, tmp = 0;
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i].fir >> a[i].sec;
  }

  sort (a + 1, a + n + 1, cmp);

  for (int i = 1; i <= n; i++) 
    if (a[i].fir > tmp) {
      ans++;
      tmp = a[i].sec;
    }
  cout << ans;
  return 0;
}