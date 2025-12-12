#include <bits/stdc++.h>
using namespace std;
map <int, int> mp;
int n, k;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("substr.inp", "r", stdin);
    freopen("substr.out", "w", stdout);
    cin >> n >> k >> s;
    int l = 0, cs = 0, ans = 0, vt = 0;
    for (int r = 0; r < n; r++){
        mp[s[r] - 'a']++;
        while (mp[s[r] - 'a'] > k){
            mp[s[l] - 'a']--;
            l++;
        }
        cs = r - l + 1;
        if (cs > ans){
            ans = cs;
            vt = l;
        }
        else if (cs == ans && l < vt) vt = l;
    }
    cout << ans << ' ' << vt + 1;
    return 0;
}