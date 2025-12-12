#include <bits/stdc++.h>
const long long N = 1e9 + 7;

using namespace std;
long long n, k , l, r;
long long res;
int p;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("PENGAME.INP","r",stdin);
    freopen("PENGAME.OUT","w",stdout);
    cin >> n >> k >> l >> r;
    p = r - l + 1;
    if (n == k) {
        cout << 1;
        return 0;
    }
    if (k == 1){
        cout << p;
        return 0;
    }
    p -= (k - 1);
    while (p > 0){
        res += p;
        p -= (k - 1);
    }
    cout << res % N;
    return 0;
}