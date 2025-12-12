#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
int a[N + 6];

int solve(string s) {
    int n = s.size();
    return (s[n - 1] - '0') + (s[n - 2] - '0')*10 + (s[n - 3] - '0')*100 + (s[n - 4] - '0')*1000; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("THONGKE.inp", "r", stdin);
    freopen("THONGKE.out", "w", stdout);
    int n, ans = 0, b, e; cin >> n;
    cin.ignore();
    string ten;
    for (int i = 1; i <= n; i++) {
        getline (cin, ten);
        a[i] = solve(ten);
        if(i != n)cin.ignore();
    }
    sort (a + 1, a + n + 1);
    for (int i = 2; i <= n; i++) {
        if ((a[i] - a[i - 1] - 1) > ans) {
            ans = a[i] - a[i - 1] - 1;
            b = a[i - 1] + 1; e = a[i] - 1;
        } 
    } 
    cout << ans << '\n' << b << ' ' << e;
    return 0;
}
