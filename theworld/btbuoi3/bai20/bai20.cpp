#include <bits/stdc++.h>
const int N = 1e9;
using namespace std;
long long n, k, l, r, mid, ans;
int main() {
    cin >> n >> k;
    l = n / k; r = N;
    while (l <= r){
        mid = (l + r + 1) / 2;
        if (mid * k > n){
            ans = mid*k;
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << ans;
    return 0;
}