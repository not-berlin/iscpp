#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    string s; cin >> s;
    int n = s.length();
    int res = 0;

    for (int i = 0; i < n; i++) {
        int cnt[26];
        memset(cnt, 0, sizeof(cnt));
        int mx = 0;
        for (int j = i; j < n; j++) {
            int c = s[j] - 'a';
            cnt[c]++;
            mx = max(mx, cnt[c]);
            
            int len = j - i + 1;
            if (mx >= len / 2) { 
                res = max(res, len);
            }
        }
    }

    cout << res;
    return 0;
}