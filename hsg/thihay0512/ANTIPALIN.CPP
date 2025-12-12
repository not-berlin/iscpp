#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("ANTIPALIN.inp", "r", stdin);
    freopen("ANTIPALIN.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = n - 1; i >= 0; i--) {
        for (char c = s[i] + 1; c < 'a' + k; c++) {
            if (i >= 1 && c == s[i - 1]) continue;
            if (i >= 2 && c == s[i - 2]) continue;
            s[i] = c;
            for (int j = i + 1; j < n; j++) {
                for (char t = 'a'; t < 'a' + k; t++) {
                    if (j >= 1 && t == s[j - 1]) continue;
                    if (j >= 2 && t == s[j - 2]) continue;
                    s[j] = t;
                    break;
                }
            }
            cout << s;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}