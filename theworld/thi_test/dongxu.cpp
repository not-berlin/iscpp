#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m;
    cin >> n >> m;

    vector<long long> c(n + 2, 0);

    for (int i = 0; i < m; ++i) {
        long long l, r;
        cin >> l >> r;
        if (l <= r) {
            c[l]++;
            c[r + 1]--;
        } else {
            c[l]++;
            c[n + 1]--;
            c[1]++;
            c[r + 1]--;
        }
    }

    for (long long i = 1; i <= n; ++i) {
        c[i] += c[i - 1];
    }

    int mc = 0;
    int mcnt = 0;

    for (long long i = 1; i <= n; ++i) {
        if (c[i] > mc) {
            mc = c[i];
            mcnt = 1;
        } else if (c[i] == mc) {
            mcnt++;
        }
    }

    cout << mc << " " << mcnt << endl;

    return 0;
}