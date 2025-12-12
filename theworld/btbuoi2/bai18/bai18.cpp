#include <bits/stdc++.h>
const int N = 1e5;
using namespace std;
int a[N + 6], n;
long long l;
bool check1 (int x , int b[]){
    for (int j = 1; j <= x; j++)
        if (a[j] == 1){
            return true;
        }
    return false;
}
int tmp, ans;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    tmp = a[1];
    for (int i = 2; i <= n; i++){
        tmp = (__gcd(tmp, a[i]));
        ans = tmp;
        if (ans == 1){
            if (check1(n, a)) cout << 1;
            else cout << -1;
            return 0;
        }
    }
    cout << ans;
    return 0;
}