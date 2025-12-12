#include <bits/stdc++.h>
#define ll long long
using namespace std;

string S;
ll b, s, c, nb, ns, nc, pb, ps, pc, ans;
long long t, z = 0;
bool check(long long x){
    long long bx, sx, cx;
    bx = max (z, x * b - nb);
    sx = max (z, x * s - ns);
    cx = max (z, x * c - nc);
    return (bx * pb + sx * ps + cx * pc) <= t;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("humberger.inp","r",stdin);
    freopen("humberger.out","w",stdout);
    cin >> S;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> t;
    int n = S.length();
    for (int i = 0; i < n; i++){
        if (S[i] == 'B') b++;
        if (S[i] == 'S') s++;
        if (S[i] == 'C') c++;
    }
    int l = 0;
    long long r = 1e12;
    int mid;
    while (l <= r){
        mid = (l + r) / 2;
        if (check(mid)){
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << ans;
    return 0;
}