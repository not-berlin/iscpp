#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int f[N + 5];
map <int, int> mp;


void sub1() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        f[x]++;
    }
    for (int i = 1; i <= N; i++) {
        if (f[i] == 1) {
            cout << i;
            return;
        }
    }
    cout << -1;
    return;
}

void sub2(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mp[x]++;
    }
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        if (it->second == 1) {
            cout << it->first;
            return;
        }
    }
    cout << -1;
    return;
}

int main() {
    sub2();
    return 0;
}