#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector <string> f(N + 3);

string cong(string s1, string s2) {
    string ans = "";
    int r = 0, n1 = s1.size(), n2 = s2.size();
    if(n1 < n2) swap(s1, s2);

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < n1; i++) {
        int a = s1[i] - '0';
        int b = (i < n2 ? (s2[i] - '0') : 0);
        int s = r + a + b;
        ans += (char)((s % 10) + '0');
        r = s/10;
    }
    if(r != 0) ans += (char)(r + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("FIBO.INP", "r", stdin);
    freopen("FIBO.OUT", "w", stdout);
    f[0] = "0"; f[1] = "1";
    for (int i = 2; i <= N; i++) f[i] = cong(f[i - 1], f[i - 2]);
    int x;
    while(cin >> x) {
        cout << f[x] << '\n';
    }
    return 0;
}