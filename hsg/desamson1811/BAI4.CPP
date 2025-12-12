#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI4.inp", "r", stdin);
    freopen("BAI4.out", "w", stdout);
    long long n; cin >> n;
    string s = "";
    n++;
    while (n > 1) {
        s += (n % 2 == 0 ? "4" : "7");
        n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}