#include <bits/stdc++.h>
const int N = 100000;
using namespace std;
int n, d;
long long S[N+5], res;

struct cow{
    int a;
    int b;
} c[N+5];

bool cmp (cow x, cow y){
    return x.a < y.a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("cow.inp","r",stdin);
    freopen("cow.out","w",stdout);
    cin >> n >> d;
    for (int i = 1; i <= n; i++) 
        cin >> c[i].a >> c[i].b;
    sort (c + 1, c + n + 1, cmp);
    for (int i = 1; i <= n; i++){
        S[i] = S[i-1] + c[i].b;
    }
    int i = 1, j = 1;
    while (j <= n){
        if ((c[j].a - c[i].a) <= d) {
            res = max (res, S[j] - S[i-1]);
            j++;
        }
        else i++;
    }
    cout << res;
    return 0;
}