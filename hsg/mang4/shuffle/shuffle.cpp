#include <bits/stdc++.h>

using namespace std;
const int N = 100000;
int L[N+5], R[N+5];
int n, x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("shuffle.inp","r",stdin);
    freopen("shuffle.out","w",stdout);
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        L[i] = i - 1;
        R[i] = i + 1;
    } 
    R[0] = 1; R[n] = 0;
    int i, j;
    while(x--){
        cin >> i >> j;
        L[R[i]] = L[i];
        R[L[i]] = R[i];
        
        L[i] = L[j];
        R[L[j]] = i;
        L[j] = i;
        R[i] = j;
    }
    int k = 0;
    for (int l = 1; l <= n; l++){
        cout << R[k] << ' ';
        k = R[k];
    }    
    return 0;
}