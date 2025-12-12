#include <bits/stdc++.h>
using namespace std;

int main() {
  char c; cin >> c;
  if (c >= 'a' && c <= 'z') cout << char(int(c - 32));
  else cout << char(int(c + 32));
  return 0;
}