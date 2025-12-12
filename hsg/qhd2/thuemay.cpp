#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
const int M = (int)1e9;

struct user {
    int id;
    int l, r, v;
} a[N + 3];

bool cmp(user p, user q) {
    return p.r < q.r;
}

int f[N + 3], v[N + 3];
vector <int> res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("thuemay.inp", "r", stdin);
    freopen("thuemay.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        a[i].id = i;
        cin >> a[i].l >> a[i].r >> a[i].v;
    }
    
    sort(a + 1, a + n + 1, cmp);
    a[0].id = 0; a[0].l = -M; a[0].r = -M; a[0].v = 0;
    a[n + 1].id = n + 1; a[n + 1].l = M; a[n + 1].r = M; a[n + 1].v = 0;
    f[0] = 0; f[1] = a[1].v;

    for (int i = 2; i <= n + 1; i++) 
        for (int j = 0; j < i; j++) 
            if (a[j].r <= a[i].l && f[i] < f[j] + a[i].v){
                f[i] = f[j] + a[i].v;
                v[i] = j;
            }

    int i = n + 1;
    while (i > 0) {
        res.push_back(a[v[i]].id);
        i = v[i];
    }
    cout << res.size() - 1  << ' ' << f[n + 1] << '\n';
    for (int i = res.size() - 2; i >= 0; i--) cout << res[i] << ' ';
    return 0;
}