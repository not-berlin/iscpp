#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
long long a[N+5], res ;
int t[N+5], c[4], n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("photo.inp","r",stdin);
    freopen("photo.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i] >> t[i];
    }
    res = n;
    int i = 1, j = 1;
    while (j <= n){
        if (c[1] > 0 && c[2] > 0 && c[3] > 0){
            res = min (res, a[j] - a[i]);
            c[t[i]]--;
            i++;
        }
        else{
            j++;
            c[t[j]]++;
        }
    }
    cout << res;
    return 0;
}
