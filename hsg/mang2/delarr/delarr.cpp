#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
int n, a[N+2], s = 0, ans = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("delarr.inp","r",stdin);
    freopen("delarr.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        s = s + a[i];
    }
    sort (a + 1, a + n + 1);
    int i = 1, j = n;
    while (s != 0){
        if (s > 0){
            s = s - a[j];
            j--;
            ans++;
            //cout << s << ' ';
        }
        if (s < 0){
            s = s - a[i];
            i++;
            ans++;
            //cout << s << ' ';
        }

    }
    cout << ans;
    return 0;
}