#include <bits/stdc++.h>
using namespace std;
string n;
int sum (string a){
    int s = 0;
    for (int i = 0; i <= a.size() - 1; i++){
        s += (int)(a[i]) - 48;
    }
    return s;
}
int main() {
    cin >> n;
    sort (n.begin(), n.end(), greater<char>());
    if (sum(n) % 3 == 0 && n[n.size() - 1] == '0') cout << n;
    else cout << -1;
    return 0;
}