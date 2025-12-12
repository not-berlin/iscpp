#include <bits/stdc++.h>
using namespace std;
int n;
long long a[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("nghichthe1.inp","r",stdin);
    freopen("nghichthe1.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        int temp = 0;
        for (int j = 1; j <= i; j++){
        
            if (a[i] < a[j]){
                temp++;
            }
        }
        cout << temp << ' ';
    }
    return 0;
}