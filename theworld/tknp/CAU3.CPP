#include <bits/stdc++.h>
using namespace std;

vector <int> w;
int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("CAU3.INP", "r", stdin);
  freopen("CAU3.OUT", "w", stdout);
  cin >> n;
  w.resize(n * n);

  long long t = 0;
  for (int i = 0; i < n * n; i++) {
    cin >> w[i];
    t += w[i];
  }
  
  sort (w.begin(), w.end());
  long long mw = 1e18;
  
  long long m = 0, wt = -1;
  for (int i = 0; i < n * n; i++) {
    if (wt == w[i]) m += w[i];
    else {
      if (m > 0) mw = min(mw, m);
      m = w[i]; wt = w[i];
    }
  }
  mw = min (mw, m);

  cout << t - mw;
  return 0;
}