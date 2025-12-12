#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
int n, m;
int L[N+2], R[N+2];
void left(int i, int j){
    L[i] = L[j];
    R[L[j]] = i;
    L[j] = i;
    R[i] = j;
}
void right(int i, int j){
    R[i] = R[j];
    L[R[j]] = i;
    R[j] = i;
    L[i] = j;
}
void leave(int i){
    L[R[i]] = L[i];
    R[L[i]] = R[i];
    L[i] = 0;
    R[i] = 0;
}
void name(int i){
    cout << L[i] << ' ' << R[i] << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("formation.inp","r",stdin);
    freopen("formation.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        int t;
        cin >> t;
        if (t == 1){
            int a, b;
            cin >> a >> b;
            left(a, b);
        }
        if (t == 2){
            int a, b;
            cin >> a >> b;
            right(a, b);
        }
        if (t == 3){
            int a;
            cin >> a;
            leave(a);
        }
        if (t == 4){
            int a;
            cin >> a;
            name(a);
        }
    }
    return 0;
}