#include <bits/stdc++.h>
const int N = 10000;
using namespace std;
int n, s, a[103], L[N + 3];
bool F[N + 3];
vector <int> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("sums.inp","r",stdin);
    freopen("sums.out","w",stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    F[0] = true;
    for (int i = 1; i <= n; i++){
        for (int j = s; j >= a[i]; j--){
            if (F[j - a[i]]){
                F[j] = true;
                if (L[j] == 0) L[j] = i;
            }
        }
    }
    if (F[s]){
        cout << "YES" << "\n";
        int j = s;
        while (j > 0){
            res.push_back(L[j]);
            j -= a[L[j]];
        }
        reverse(res.begin(), res.end());
        for (auto c : res) cout << c << ' ';
    }
    else{
        cout << "NO";
    }
    return 0;
}