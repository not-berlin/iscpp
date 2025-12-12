#include <bits/stdc++.h>
using namespace std;
string a[102];
int n = 1;
bool cmp (string a, string b){
    return a > b;      
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("numcon.inp","r",stdin);
    freopen("numcon.out","w",stdout);
    string s;
    while (cin >> s){
        a[++n] = s;
    }
    sort (a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i] + a[j] > a[j] + a[i]) 
                a[i].swap(a[j]);
        }
    }
    for (int i = 1; i <= n; i++) 
        cout << a[i];
    return 0;
}
