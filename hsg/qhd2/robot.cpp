#include <bits/stdc++.h>
using namespace std;
const int N = 100;
const int M = (int)1e9;

struct gift {
    int id;
    int x, y;
} g[N + 3];

int v[N + 3], f[N + 3];
vector <int> res;

bool cmp(gift a, gift b) {
    return a.x < b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("robot.inp", "r", stdin);
    freopen("robot.out", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        g[i].id = i;
        cin >> g[i].x >> g[i].y;
    }

    sort (g + 1, g + n + 1, cmp);
    g[0].id = 0; g[0].x = -M; g[0].y = -M;
    g[n + 1].id = n + 1; g[n + 1].x = M; g[n + 1].y = M;

    for (int i = 1; i <= n + 1; i++) 
        for (int j = 0; j < i; j++)
            if (g[j].x < g[i].x && g[j].y < g[i].y) {
                if (f[i] < f[j] + 1) {
                    f[i] = f[j] + 1;
                    v[i] = j;
                }
            }
    cout << f[n + 1] - 1 << '\n';
    int i = n + 1;
    while (i > 0) {
        res.push_back(g[i].id);
        i = v[i];
    }
    for (int i = res.size() - 1; i > 0; i--) cout << res[i] << ' ';
    return 0;
}