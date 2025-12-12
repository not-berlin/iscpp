#include <bits/stdc++.h>

using namespace std;
int n, a[100005], c[2003], ans = 1;
bool check (int k){
    memset(c, 0, sizeof(c));
    for (int i = 1; i <= k; i++) c[a[i] + 1000]++;
    for (int i = k + 1; i <= n; i++){
        for (int j = i; j < i + k; j++){
            if (c[a[j] + 1000] <= 0) return false;
        }
        c[a[i] + 1000]++;
        c[a[i - k] + 1000]--;
    }
    for (int i = n - k + 1; i <= n; i++) if (c[a[i] + 1000] <= 0) 
        return false;
    return true;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, r = n;
    while (l <= r){
        int mid = (l + r) / 2;
        if (check(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}