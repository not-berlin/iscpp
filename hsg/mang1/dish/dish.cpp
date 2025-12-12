#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 500000;
ll n, p, ans, temp, l = 0, r = 0;
ll s[N], pmin[N], a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("dish.inp","r",stdin);
    freopen("dish.out","w",stdout);
    cin >> n >> p;
    ans = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    temp = 0;
    for (int i = 1; i <= n; i++){
        if (s[i] < s[temp]){
            pmin[i] = i; 
            temp = i;
        }
        else pmin[i] = pmin[i-1];
    }
    int j1 = n;
    for (int i = n; i >= 0; i--)
        if(pmin[i] == i){
            int j;
            for (int j = j1; j >= i + 1; j--){
                if (s[j]-s[i] >= p)
                    if(ans < j - i){
                        ans = j - i;
                        l = i + 1; r = j;
                        break;
                    }
                j1 = j;
            }
        }
    if (ans == 0) cout << -1;
    else cout << l << " " << r;
    return 0;
}