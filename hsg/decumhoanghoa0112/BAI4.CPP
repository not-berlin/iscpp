#include <bits/stdc++.h>
using namespace std;
#define fir first
#define sec second
stack<pair<char, int>> st;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BAI4.inp", "r", stdin);
    freopen("BAI4.out", "w", stdout);
    int n, k; cin >> n >> k;
    string s; cin >> s;

    for (char c : s) {
        if (st.empty() || st.top().fir != c) st.push({c, 1}); 
        else st.top().sec++;
        if (st.top().sec == k) st.pop();
    }
    string res = "";
    while (!st.empty()) {
        char ch = st.top().fir;
        int cnt = st.top().sec;
        st.pop();
        for (int i = 0; i < cnt; ++i) res += ch;
    }
    reverse(res.begin(), res.end());

    cout << res;
    return 0;
}
