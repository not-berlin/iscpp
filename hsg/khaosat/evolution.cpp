#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("EVOLUTION.inp", "r", stdin);
  freopen("EVOLUTION.out", "w", stdout);
  string d, e;
  cin >> d >> e;
  deque <char> ans;
  ans.push_back(d[0]);

  for (int i = 0; i < e.size(); i++) {
    if (e[i] > ans[0]) ans.push_back(e[i]);
    else ans.push_font(e[i]);
  }
  for (char c : ans) cout << c;
  return 0;
}