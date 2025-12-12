#include <bits/stdc++.h>

using namespace std; 

long long n;
int cnt(long long n){
    long long dem = 0;
    while (n > 0){
        dem += n/5;
        n /= 5;
    }
    return dem;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("bai8.inp", "r", stdin);
    freopen("bai8.out", "w", stdout);
    cin >> n;
    cout << cnt(n);
    return 0;
}