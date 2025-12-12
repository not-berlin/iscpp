#include <bits/stdc++.h>
using namespace std;
unsigned long long n, p = 1e18;
int ans;
bool check(long long n){
    if (n == 1) return false;
    if (n == 2) return true; 
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    cin >> n;
    while (p > 0){
        if (n / p != 0 && check(n/p)){
            ans++;
            cout << n / p << ' ';
        }
        p /= 10;
    }
    if (ans == 0) cout << -1;
    else cout << '\n' << ans;
    return 0;
}