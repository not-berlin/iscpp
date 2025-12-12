#include <bits/stdc++.h>
using namespace std;
int t, a, b;
long long sa, sb;
int main() {
    cin >> t;
    while (t--){
        cin >> a >> b;
        sa = (a *(a + 1)) / 2;
        sb = ((b - 1) * ((b - 1) + 1)) / 2;
        cout << sb*sb - sa*sa << '\n';
    }
    return 0;
}