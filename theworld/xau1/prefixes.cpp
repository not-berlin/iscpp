#include <bits/stdc++.h>
using namespace std;
string s;
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("prefixes.inp", "r", stdin);
    freopen("prefixes.out", "w", stdout);
    cin >> n >> s;
    int a = 0, b = 0, ans;
    for (int i = 0; i < n; i++){
        if (s[i] == 'a') a++;
        else b++;
    }
    ans = abs(a - b)/2;
    cout << ans << '\n';
    string sr = s;
    if (a > b){
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (sr[i] == 'a' && cnt < ans){
                sr[i] = 'b';
                cnt++;
            }
        }
    }
    else {
        int cnt  = 0;
        for (int i = 0; i < n; i++){
            if (sr[i] == 'b' && cnt < ans){
                sr[i] = 'a';
                cnt++;
            }
        }
    }
    cout << sr;
    return 0;
}
