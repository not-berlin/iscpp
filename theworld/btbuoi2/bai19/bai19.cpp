#include <bits/stdc++.h>
using namespace std;
int n, a, b, p, q;
int pa, pb, pab;
int main() {
    cin >> n >> a >> b >> p >> q;
    pa = n / a;
    pb = n / b;
    pab = n / ((a * b) / (__gcd(a, b)));
    if (p > q) pb -= pab;
    else pa -= pab;
    cout << pa*p + pb*q;
    return 0;
}