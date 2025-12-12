#include <bits/stdc++.h>
using namespace std;
string n, ans;
int b[25];
bool check (string a){
    for (int i = 0; i <= a.size() - 1; i++){
        if (a[i] == '0') return true;
    }
    return false;
}
int sum (string a){
    int s = 0;
    for (int i = 0; i <= a.size() - 1; i++){
        s += (int)(a[i]) - 48;
    }
    return s;
}

int main() {
    cin >> n;
    if (sum(n) % 3 == 0 && check(n)){
        for (int i = 0; i < n.size(); i++) b[(int)n[i] - 48]++;
        for (int i = 9; i >= 0; i--){
            for (int j = 0; j < b[i]; j++) ans += (char)(48 + i);
        }
        cout << ans;
    }
    else cout << -1;
    return 0;
}