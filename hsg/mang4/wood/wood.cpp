#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
long long a[N+5];
int n, ans;
long long S, t;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("wood.inp","r",stdin);
    freopen("wood.out","w",stdout);
    cin >> n >> S;
    ans = n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    t = a[1];
    int i = 1, j = 1;
    while (j <= n){
        if (t < S){
            j++;
            t += a[j];
        }
        else{
            ans = min(ans, j - i + 1);
            t -= a[i];
            i++;
        }
    }
    cout << ans;
}