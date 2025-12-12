#include <bits/stdc++.h>

using namespace std;
int pt (long long n){
    int dem = 0;
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0) dem++;
        while (n % i == 0) n /= i;
    }
    if (n > 1) dem++;
    return dem;
}
long long a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("countprd.inp","r",stdin);
    freopen("countprd.out","w",stdout);
    cin >> a;
    cout << pt(a);
    return 0;
}