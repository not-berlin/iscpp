#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
int n, a[N+2], l[N+2];
int temp = 1, t = 2, res = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("flowers.inp","r",stdin);
    freopen("flowers.out","w",stdout);
    cin >> n;
    l[1] = 1; l[2] = 2;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 3; i <= n; i++){
        if(a[i] == a[i-1] && a[i] == a[i-2]) l[i] = 2;
        else l[i] = l[i-1] + 1;
    }
    cout << *max_element(l+1, l+n+1);
    return 0;
}