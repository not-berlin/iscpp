#include <bits/stdc++.h>

using namespace std;
const int N = 10004;
int b[N], f[N], vt[N], x[N];

int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    b[n + 1] = n + 1;
    for (int i = 1; i <= n + 1; i++) {
        for (int j = 0; j < i; j++) {
            if (b[j] < b[i] && f[i] < f[j] + 1) {
                f[i] = f[j] + 1;
                vt[i] = j;
            }
        }
    }
    int j = n + 1, k = vt[j];
    while (j > 0) {
        j = vt[j];
        x[b[j]] = k;
        k = vt[j];
    }
    cout << f[n + 1] - 1 << '\n';
    for (int i = 1; i <= n; i++) {
        if (x[i] > 0) cout << i << ' ' << x[i] << '\n';
    }
    return 0;
}