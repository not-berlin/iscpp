#include <bits/stdc++.h>
using namespace std;
const int N = 100005;

long long a[N + 5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DOLLS.inp", "r", stdin);
    freopen("DOLLS.out", "w", stdout);
    int n; long long k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);

    multiset <long long> st;
    for (int i = 1; i <= n; i++) {
        auto j = st.upper_bound(a[i] - k);
        if (j != st.begin()) st.erase(--j);
        st.insert(a[i]);
    }
    long long ans = 0;
    for (long long i : st) ans += i;
    cout << ans;
    return 0;
}