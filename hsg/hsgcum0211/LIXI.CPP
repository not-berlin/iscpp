#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("LIXI.inp", "r", stdin);
  freopen("LIXI.out", "w", stdout);
  string s; int k;
  cin >> s >> k;
  stack <char> st;
  for (char i : s) {
    while (k > 0 && !st.empty() && st.top() < i) {
      st.pop();
      k--;
    }
    st.push(i);
  }
  while (k > 0) {
    st.pop();
    k--;
  }
  string ans;
  while (!st.empty()) {
    ans.push_back(st.top());
    st.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << ans;
  return 0;
}