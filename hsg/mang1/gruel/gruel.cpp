#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n, m, k;
int t[N+2],d[N+2],a[N+2], x[N+2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("gruel.inp","r",stdin);
    freopen("gruel.out","w",stdout);
    memset(x, 0, sizeof(x));
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++) cin >> t[i] >> d[i] >> a[i];
    cout << "Yes" << '\n';
    n--;
    if (a[1] == 1) m--;
    for (int i = 2; i <= k; i++){
        for (int j = 1; j < i; j++){
            if (x[j] == 0 && t[j] + d[j] <= t[j]){
                n++;
                if (a[j] == 1) m++;
                x[j] = 1;
            }
            else d[j]--;
        }
        if (n == 0){
            cout << "No" << '\n';
            x[i] = 1;
        }
        else{
            if (a[i] == 0){
                cout << "Yes" << '\n';
                n--;
            }
            if (a[i] == 1){
                if(m == 0) cout << "No" << '\n'; 
                else{
                    cout << "Yes" << '\n';
                    m--;
                    n--;
                }
            }
        }
    }
    return 0;
}