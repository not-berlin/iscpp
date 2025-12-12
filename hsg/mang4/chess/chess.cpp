#include <bits/stdc++.h>
#define N 1000
using namespace std;
int a[N+3], b[N+3];
int n;
bool cmp (int x, int y){
    return x > y;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("chess.inp","r",stdin);
    freopen("chess.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }
    sort (a + 1, a + n + 1, cmp);
    sort (b + 1, b + n + 1, cmp);
    int i = 1, j = 1, ans = 0;
    while (i <= n && j <= n){
        if (b[i] > a[j]){
            ans += 2;
            i++;
            j++;
        }
        else if (b[i] == a[j]){
            ans++;
            i++;
            j++;
        }
        else j++;
    }
    cout << ans;
    return 0;
}