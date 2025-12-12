#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, s = 0;
    cin >> n >> x;
    for (int i = 1; i * i <= x; i++)
        if (x % i == 0){
            if (i <= n && x / i <= n){
                if (i * i == n) s++;
                else s += 2;
            }
        }
    cout << s;
    return 0;
}