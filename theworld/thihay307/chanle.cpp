#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
  cin >> n;
  while (n--) {
    int ans = 0, tmp = 0, tdiv = 1;
    bool div = false;
    string s;
    cin >> s;
    s = ' ' + s + '+';
    for (int i = 0; i < s.size(); i++){
      if (s[i] == '+') {
        if (div) tdiv = (tdiv * tmp) % 2;
        else tdiv = tmp;
        ans = (ans + tdiv) % 2;
        tdiv = 1;
        div = false;
      }
      else if (s[i] == '*'){
        if (div) tdiv = (tdiv * tmp) % 2;
        else tdiv = tmp;
        div = true;
      }
      else {
        if ((s[i] - '0') % 2 == 0) tmp = 0;
        else tmp = 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}