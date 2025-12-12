#include <bits/stdc++.h>
using namespace std;
int na[6], nb[6];
int n, m;
int main() {
    cin >> n >> m;
    for (int i = 0; i <= 4; i++){
        na[i] = n / 5;
        nb[i] = m / 5;
    }
    for (int i = 1; i <= n % 5; i++) na[i]++;
    for (int i = 1; i <= m % 5; i++) nb[i]++;
    cout << na[0]*nb[0] + na[1]*nb[4] + na[2]*nb[3] + na[3]*nb[2] + na[4]*nb[1];
    return 0;
}