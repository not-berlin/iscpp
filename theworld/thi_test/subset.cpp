#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int sum = 0;
    int len = 1e7, alen = 1e7;

    for (int r = 1; r <= n; r++) {
        sum += a[r];
        while (sum >= s) {
            len = min(len, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

    if (len == alen) cout << -1;
    else cout << len;
    return 0;
}