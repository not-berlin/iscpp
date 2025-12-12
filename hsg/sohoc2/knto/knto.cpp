#include <bits/stdc++.h>
const int N = 1000000;
using namespace std;
int c[N+6];
bool check = true;
int u = 1, p = 0, m = 0;
void pt(int a){
    for (int i = 2; i * i <= a; i++){
        while (a % i == 0){
            c[i]++;
            a /= i;
        }
        m = max (m, i);
    }
    if (a > 0) c[a]++;
    m = max (a, m);
}
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("knto.inp","r",stdin);
    freopen("knto.out","w",stdout);
    cin >> n;
    pt(n);
    for (int i = 2; i <= m; i++){
        if (c[i] > 0){
            u *= (c[i]+1);
            p++;
        }
    }
    cout << u - p;
    return 0;
}