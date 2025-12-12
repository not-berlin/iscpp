#include <bits/stdc++.h>
const int N =  100000;
using namespace std;
int n;
long long b[N+2], c[N+2];
int temp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("seqgame.inp","r",stdin);
    freopen("seqgame.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> b[i];
    for (int i = 1; i <= n; i++) 
        cin >> c[i];
    sort(b+1, b+n+1);
    sort(c+1, c+n+1);
    int i = 1, j = n;
    int ans = 10e8;
    while ( i < n && j > 0){
        temp = b[i] + c[j];
        if (temp > 0) j--;
        else i++;
        ans = min(abs(temp), ans);
        if (ans == 0) break;
    }
    cout << ans;
    return 0;
}