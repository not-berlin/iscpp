#include <bits/stdc++.h>
using namespace std;
const int N = 1000000 + 6;
const long long M = 2e9;
bool check[N];

void sang() {
    memset(check, true, sizeof(check));
    check[0] = false;
    check[1] = false;
    for (int i = 2; i * i <= N; i++){
        if(check[i]) {
            for (int j = i * i; j <= N; j += i) check[j] = false; 
        }
    }
}

long long a[N], s[N], c[N];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("SEQ.INP", "r", stdin);
    freopen("SEQ.OUT", "w", stdout);
    int n; cin >> n;
    s[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
    sang();
    long long smax = -M, smin = M;
    int imax;
    for (int i = 1; i <= n; i++) {
        if (check[a[i]] && s[i] > smax) {
            smax = s[i];
            imax = i;
        }
    }
    for (int i = 1; i <= imax; i++) {
        if (s[i - 1] < smin && check[a[i]]) smin = s[i - 1];
    }
    if (smax - smin == -2*M) cout << 0;
    else cout << smax - smin;
    return 0;
}