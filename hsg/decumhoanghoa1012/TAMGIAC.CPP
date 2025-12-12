#include <bits/stdc++.h>
using namespace std;
map <vector<long long>, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TAMGIAC.INP", "r", stdin);
    freopen("TAMGIAC.OUT", "w", stdout);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        vector <long long> vt;
        long long a, b, c;
        cin >> a >> b >> c;
        vt.push_back(a);
        vt.push_back(b);
        vt.push_back(c);
        sort(vt.begin(), vt.end());
        mp[vt]++;
    }
    int res = 0;
    map <vector<long long>, int> ::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        if (it -> second == 1) res++;
    }
    cout << res;
    return 0;
}