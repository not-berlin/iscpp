#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int a[N + 6], n;

int tknp (int x){
  int l = 1, r = n;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (a[mid] == x) return mid;
    else if (a[mid] > x) r = mid - 1;
    else l = mid + 1;
  }
}

int main() {
  int t;
  cin >> n >> t;
  for (int i = 1; i <= n; i++) cin >> a[i];
  sort (a + 1, a + n + 1);
  while(t--) {
    int q; cin >> q; 
    cout << tknp(q) << '\n';
  }
  return 0;
}