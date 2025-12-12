#include <bits/stdc++.h>
#define N 2500
using namespace std;
string s;
int n, ans = 0, F[N+2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("house.inp","r",stdin);
    freopen("house.out","w",stdout);
    cin >> n;
    cin >> s;
    s = " " + s + " ";
    for (int i = 1; i <= n; i++){
        if (s[i] == s[i-1]) F[i] = F[i-1] + 1;
        else F[i] = 1;
    }
    for (int i = 1; i <= n+1; i++){
        //cout << F[i] << ' ';
        if (F[i] < F[i-1]) ans = ans + (F[i-1]/2);
    }
    cout << ans;
    return 0;
}