#include <bits/stdc++.h>

using namespace std;

int n, a[105], p[105];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("nghichthe2.inp","r",stdin);
    freopen("nghichthe2.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> p[i];
    }
    for (int i = n; i >= 1; i--){
        int j;
        for (j = n; j >= 1; j--){
            if (p[j] == 0){
                break;
            }
        }
        a[j] = i;
        for (int k = j; k <= n; k++){
            p[k]--;
        }
    }
    for (int i = 1; i <= n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}
