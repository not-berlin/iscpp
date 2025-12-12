#include <bits/stdc++.h>
const int N = 1e5;
using namespace std;
int p[N+2], a, b;
void sang(){
    fill (p + 2, p + N + 1, 1);
    for (int i = 2; i * i <= N; i++){
        if (p[i] == 1){
            for (int j = i * i; j <= N; j += i) p[j] = 0;
        }
    }
}
bool check(int n){
    while (n > 0){
        if (p[n] == 0) return false;
        n = n / 10;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("sprime.inp","r",stdin);
    freopen("sprime.out","w",stdout);
    cin >> a >> b;
    sang();
    for (int i = a; i <= b; i++){
        if (p[i] == 1 && check(i)){
            cout << i << '\n';
        }
    }
    return 0;
}