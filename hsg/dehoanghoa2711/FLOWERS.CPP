#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;

struct fl {
    int g;
    int c;
} a[N + 6], b[N + 6];

bool cmp1(fl x, fl y) {
    return x.g > y.g;
}
bool cmp2(fl x, fl y) {
    return x.g < y.g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("FLOWERS.inp", "r", stdin);
    freopen("FLOWERS.out", "w", stdout);
    long long n, m, S; 
    cin >> n >> m >> S;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].g;
        a[i].c = i;
    }

    for (int i = 1; i <= m; i++) {
        cin >> b[i].g;
        b[i].c = i;
    }

    sort(a + 1, a + n + 1, cmp1); 
    sort(b + 1, b + m + 1, cmp2); 

    long long tb = -1;
    int sa = 0, sb = 0, i = 1, j = 1;

    while (i <= n && j <= m) {
        long long t = a[i].g + b[j].g;
        if (t <= S) {
            if (t > tb) {
                tb = t;
                sa = a[i].c;
                sb = b[j].c;
            }
            j++; 
        } else i++;
    }

    cout << sa << " " << sb << endl;
    return 0;
}