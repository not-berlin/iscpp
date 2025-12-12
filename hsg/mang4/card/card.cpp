#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
int m, k;
string s;
int L[N+2], R[N+2], a[N+2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("card.inp","r",stdin);
    freopen("card.out","w",stdout);
    cin >> m >> k;
    cin >> s;
    for (int i = 1; i < m; i++){
        a[i] = i;
    }
    R[0] = 1;
    for (int i = 1; i < m; i++){
        L[i] = i-1;
        R[i] = i+1;
    }
    int x = 0, f = 0, n = m-1, rrf, t;
    while (s[x] != '.'){
        k = R[k];
        if (s[x] == 'A'){
            L[f] = n;
            R[n] = f;
            t = R[f];
            R[f] = 0;
            n = f;
            f = t;
            L[t] = 0;
        }
        if (s[x] == 'B'){
            rrf = R[R[f]];
            L[rrf] = f;
            L[R[f]] = n;
            R[R[f]] = 0;
            R[n] = R[f];
            n = R[f];
            R[f] = rrf;
        }
        x++;
    }
    cout << L[k] << ' ' << k << ' ' << R[k];
    return 0;
}