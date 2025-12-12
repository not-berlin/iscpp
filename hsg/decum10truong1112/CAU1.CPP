#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 32000;
bool check[N];
vector<ll> nt;

void sang() {
    memset(check, true, sizeof(check));
    check[0] = false;
    check[1] = false;
    for (ll i = 2; i < N; i++) {
        if (check[i]) {
            nt.push_back(i);
            for (ll j = i * i; j < N; j += i) {
                check[j] = false;
            }
        }
        
    }
}

bool ktr(ll a) {
    if (a <= 1) return false;
    for (ll i = 2; i * i <= a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    long long n; cin >> n;
    sang();
    bool ok = false;
    for (ll y : nt) {
        if (y <= 2) continue;
        ll z = 4 + y * y;
        if (z > n) break;
        if (ktr(z)) {
            cout << 2 << " " << y << " " << z << endl;
            ok = true;
        }
    }
    if (!ok) cout << -1 << endl;
    return 0;
}