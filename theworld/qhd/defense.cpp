#include <bits/stdc++.h>
const int N = 1e9;
using namespace std;
int t, n;
int a[1003], f[1003];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("defense.inp", "r", stdin);
  freopen("defense.out", "w", stdout);
  cin >> t;
  while (t--){
    cin >> n;
    fill (a, a + n + 2, 0);
    fill (f, f + n + 2, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    a[0] = -N; a[n+1] = N;
    f[0] = 1; f[1] = 2;
    for (int i = 2; i <= n + 1; i++){
      for (int j = 0; j < i; j++){
        if (a[j] < a[i] && f[i] < f[j] + 1){
          f[i] = f[j] + 1;
        }
      }
    }
    cout << f[n+1] - 2 << '\n';
  }
    return 0;
}
