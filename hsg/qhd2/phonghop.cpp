#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
const int M = (int)1e9;

struct mt {
    int id;
    int a, b;
} x[N + 3];

int f[N + 3], v[N + 3];
vector <int> res;

bool cmp(mt p, mt q) {
    return p.b < q.b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("phonghop.inp", "r", stdin);
    freopen("phonghop.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        x[i].id = i;
        cin >> x[i].a >> x[i].b;
    }

    sort(x + 1, x + n + 1, cmp);
    x[0].id = 0; x[0].a = -M; x[0].b = -M;
    x[n + 1].id = n + 1; x[n + 1].a = M; x[n + 1].b = M;
    f[0] = 1; f[1] = 2;

    for (int i = 2; i <= n + 1; i++)
        for (int j = 0; j < i; j++)
            if (x[j].b <= x[i].a && f[i] < f[j] + 1) {
                f[i] = f[j] + 1;
                v[i] = j;
            }
    cout << f[n + 1] - 2 << '\n';
    int i = n + 1;
    while (i > 0) {
        res.push_back(x[v[i]].id);
        i = v[i];
    }
    for (int i = res.size() - 2; i >= 0; i--) cout << res[i] << ' ';
    return 0;
}