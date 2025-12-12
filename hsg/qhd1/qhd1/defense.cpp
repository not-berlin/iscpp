#include <bits/stdc++.h>
const int N = 1e9;
using namespace std;
int t, n;
int a[1003], F[1003];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("defense.inp", "r", stdin);
    freopen("defense.out", "w", stdout);
    cin >> t;
    while (t--){
        fill (a, a + n + 2, 0);
        fill (F, F + n + 2, 0);
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        a[0] = -N; a[n+1] = N;
        F[0] = 1; F[1] = 2;
        for (int i = 2; i <= n + 1; i++){
            for (int j = 0; j < i; j++){
                if (a[j] < a[i] && F[i] < F[j] + 1){
                    F[i] = F[j] + 1;
                }
            }

        }
        cout << F[n+1] - 2 << '\n';
    }
        return 0;
}
