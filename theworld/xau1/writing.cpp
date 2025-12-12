#include <bits/stdc++.h>
using namespace std;
int g, s;
string W, S;
int convert(char x){
    if (x >= 'a' && x <= 'z') return x - 'a';
    else if (x >= 'A' && x <= 'Z') return x - 'A';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("writing.inp", "r", stdin);
    freopen("writing.out", "w", stdout);
    vector <int> fw (52, 0), win (52, 0);
    cin >> g >> s >> W >> S;
    for (int i = 0; i < g; i++) {
        fw[convert(W[i])]++;
        win[convert(S[i])]++;
    }
    int cnt = 0;
    if (fw == win) cnt++;
    for (int i = g; i < s; i++){
        win[convert(S[i - g])]--;
        win[convert(S[i])]++;
        if (fw == win) cnt++;
    }
    cout << cnt;
    return 0;
}