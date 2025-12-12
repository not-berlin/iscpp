#include <bits/stdc++.h>

using namespace std;
string X, Y, res = "";
int m, n;
vector <int> x, y;
int F[103][103];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("lcs.inp","r",stdin);
    freopen("lcs.out","w",stdout);
    cin >> X >> Y;
    m = X.size(); n = Y.size();
    X = ' ' + X;
    Y = ' ' + Y;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (X[i] == Y[j]) F[i][j] = F[i - 1][j - 1] + 1;
            else F[i][j] = max (F[i][j - 1], F[i - 1][j]);
        }
    }
    int i = m, j = n;
    while (i > 0 && j > 0){
        if (X[i] == Y[j]){
            res += X[i];
            x.push_back(i);
            y.push_back(j); 
            i--;
            j--;
        }
        else{
            if (F[i][j] == F[i][j - 1]) j--;
            else i--;
        }
    }
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    reverse(res.begin(), res.end());
    cout << res << '\n';
    for (auto c : x){
        cout << c << ' ';
    }
    cout << '\n';
    for (auto c : y){
        cout << c << ' ';
    }
    return 0;
}