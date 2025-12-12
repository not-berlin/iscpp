#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[103], b[103], F[103][103];
vector <int> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("caykhe.inp","r",stdin);
    freopen("caykhe.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++){
            if (b[i] > j) F[i][j] = F[i - 1][j];
            else F[i][j] = max(F[i - 1][j], F[i - 1][j - b[i]] + a[i]);
        }
    cout << F[n][m] << '\n';
    int i = n, j = m;
    while (i > 0 && j > 0){
        if (F[i][j] == F[i - 1][j]) i--;
        if (F[i][j] == F[i - 1][j - b[i]] + a[i]){
            ans++;
            res.push_back(i);
            j -= b[i];
            i--;
        }
    }
    cout << ans;
    reverse (res.begin(), res.end());
    for (auto c : res){
        cout << ' ' << c;
    }
    return 0;
}
