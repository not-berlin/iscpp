#include <bits/stdc++.h>
using namespace std;

char x[22];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("DIGITSUM.inp", "r", stdin);
  freopen("DIGITSUM.out", "w", stdout);
  int t; cin >> t;
  while (t--) {
    memset (x, '\0', sizeof(x));
    int n; cin >> n;
    int d = 0;
    for (int i = 1; i <= n; i++) {
      cin >> x[i];
      if (x[i] == '0') d++;
    }
    sort (x + 1, x + n + 1);
    string s = "";

    s += x[d + 1];
    s += x[d + 2];
    for (int i = 1; i <= d; i++) s.push_back('0');
    for (int i = d + 3; i <= n; i++) s.push_back(x[i]);

    string a = "0", b = "0";
    for (int i = 0; i < n; i++) {
      if (i % 2 == 1) a.push_back(s[i]);
      else b.push_back(s[i]);
    }
    long long na = stoll(a), nb = stoll(b);
    cout << na + nb << '\n';
  }
  return 0;
}