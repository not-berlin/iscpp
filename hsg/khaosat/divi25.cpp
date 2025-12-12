#include <bits/stdc++.h>
using namespace std;
string s;

long long solve (int a, int b, int c) {
  if (s[a] == '#' && s[b] == '#' && s[c] == '#') return 0;
  else if (s[a] == '#' && s[c] == '#') {
    if (s[b] == '*' || (s[b] == '2' || s[b] == '7')) return 2;
    else return 0;
  }
  else if (s[a] == '#' && s[b] == '#') {
    if (s[c] == '*' || (s[c] == '5' || s[c] == '0')) return 3;
    else return 0;
  }
  else if (s[b] == '#' && s[c] == '#') {
    if (s[a] == '*') return 9;
    else return 1;
  }
  else if (s[a] == '*' || s[a] == '#') return 27;
}

int main() {
  cin >> s;
  int n = s.size();
  if (s == "0" || s == "*" || s == "#") cout << 1;
  else if (s[0] == "0") cout << 0;
  else {
    long long ans = solve(0, n - 1, n - 2);
    for (int i = 1; i < n - 1; i++) {
      if (s[i] == '*') ans *= 9;
      if (s[i] == '#' && s[n - 1] ) 
    }
  }
  return 0;
}