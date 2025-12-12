#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check (ll a) {
  for (ll i = 2; i * i <= a; i++){
    if (a % i == 0) return true;
    return false;
  }
}
int main() {
  
  return 0;
}