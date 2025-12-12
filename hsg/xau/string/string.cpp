#include <bits/stdc++.h>

using namespace std;
string a, b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("STRING.INP", "r", stdin);
    freopen("STRING.OUT", "w", stdout);
    while (cin >> a >> b){
        if (a == "END" && b == "END") break;
        sort (a.begin(), a.end());
        sort (b.begin(), b.end());
        if (a == b) cout << "same" << '\n';
        else cout << "different" << '\n';
        
    }
    return 0;
}