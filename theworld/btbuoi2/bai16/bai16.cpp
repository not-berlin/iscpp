#include <bits/stdc++.h>
using namespace std;
int n, p = 9, q = 1, a;
long long ans = 0;
int cnt (int a){
    int res = 0;
    while (a > 0){
        a /= 10;
        res++;
    }
    return res;
}
int main() {
    cin >> n;
    a = cnt(n);
    for (int i = 1; i < a; i++){
        ans += p * i;
        p *= 10; q *= 10;
    }
    ans += (n - q + 1)*a;
    cout << ans;
    
    return 0;
}