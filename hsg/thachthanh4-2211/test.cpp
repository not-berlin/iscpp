#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    long long l;
    for (int i = 0; i < s.size(); i++) {
        if ('0' <= s[i] && s[i] <= '9') {
            cout << int(s[i]) << ' ';
        }
    }
    return 0;
}