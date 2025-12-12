#include <bits/stdc++.h>
#define N 100000
using namespace std;
long long A = 0, B = 0;
int n, t = 0;
long long a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("cgame.inp","r",stdin);
    freopen("cgame.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int i = 1, j = n;
    while (i <= j){
        if (t == 0){
            if (a[i] > a[j]){
                A += a[i];
                i++;
            }
            else{
                A += a[j];
                j--;
            }
        }
        else{
            if (a[i] > a[j]){
                B += a[i];
                i++;
            }
            else{
                B += a[j];
                j--;
            }
        }
        if (t == 0) t = 1;
        else t = 0;
    }
    cout << A << ' ' << B;
    return 0;
}
