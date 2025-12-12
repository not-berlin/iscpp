#include <bits/stdc++.h>
#define N 1000
using namespace std;
int a[N+3];
int n, S, K, ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("rgame.inp","r",stdin);
    freopen("rgame.out","w",stdout);
    cin >> n >> S;
    cin >> K;
    for (int i = 1; i <= n; i++){
        a[i] = i;
    }
    int t = 1, temp = 0, i = 1;
    while (t < n){
        if (i > n) i = 1;
        if (a[i] != 0) temp++;
        if (temp == S){
            a[i] = 0;
            temp = 0;
            t++;
        }
        i++;
    }
    ans = *max_element(a + 1, a + n + 1);
    cout << ans << '\n';
    return 0;
}