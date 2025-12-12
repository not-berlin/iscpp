#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int a[N+2], c[3][N+2];
int n, m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("olympic.inp","r",stdin);
    freopen("olympic.out","w",stdout);
    cin >> n >> m;
    int k = m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        if (a[i] == 1){
            c[1][i] = c[1][i-1]+ 1;
            c[2][i] = c[2][i-1];
            c[3][i] = c[3][i-1];
        }
        if (a[i] == 2){
            c[1][i] = c[1][i-1];
            c[2][i] = c[2][i-1]+ 1;
            c[3][i] = c[3][i-1];
        }
        if (a[i] == 3){
            c[1][i] = c[1][i-1];
            c[2][i] = c[2][i-1];
            c[3][i] = c[3][i-1]+ 1;
        }
    }
    for (int i = 1; i <= k; i++){
        int l, r;
        cin >> l >> r;
        cout << (c[1][r] - c[1][l-1]) << ' ' << (c[2][r] - c[2][l-1]) << ' ' << (c[3][r] - c[3][l-1]) << '\n';
    }
    return 0;
}