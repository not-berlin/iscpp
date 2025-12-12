#include <bits/stdc++.h>
using namespace std;
const int N = 26;

int ct[N + 4], cs[N + 4];

bool check() {
    for (int i = 0; i < N; i++) 
        if (cs[i] > ct[i]) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("CAU3.inp", "r", stdin);
    freopen("CAU3.out", "w", stdout);
    int n, m, ans = 0;
    string t, s;
    cin >> n >> m >> t >> s;

    for (char c : t) ct[c - 'a']++;

    for (int i = 0; i < n; i++){
        if (s[i] != '*') cs[s[i] - 'a']++;
    }
    if (check()) ans++;

    for (int i = n; i < m; i++) {
        if (s[i] != '*') cs[s[i] - 'a']++;
        if (s[i - n] != '*') cs[s[i - n] - 'a']--;
        if (check()) ans++;
    }

    cout << ans;
    return 0;
}
