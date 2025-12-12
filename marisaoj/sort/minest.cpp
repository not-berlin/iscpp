#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort (s.begin(), s.end());
  string s0 = "";
  int tmp = 0;
  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') s0 += '0';
    else {
      tmp = i;
      break;
    }
  }
  ans = s[tmp] + s0;
  for (int i = tmp + 1; i < s.size(); i++) ans += s[i];
  cout << ans;
  return 0;
}