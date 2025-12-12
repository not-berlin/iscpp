#include <bits/stdc++.h>
using namespace std;
const int N = 5000;
const int M = (int)1e9 + 7;

bool check(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int f[N + 5];
vector <int> a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("addprime.inp", "r", stdin);
    freopen("addprime.out", "w", stdout);
    int n; cin >> n;
    a.push_back(0);
    for (int i = 2; i <= n; i++) 
        if (check(i)) a.push_back(i);
    
    f[0] = 1;
    int m = a.size() - 1;
    for (int i = 1; i <= m; i++)
        for (int j = a[i]; j <= n; j++)
            f[j] = (f[j] + f[j - a[i]]) % M;
    
    cout << f[n];
    return 0;
}