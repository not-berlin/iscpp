#include <bits/stdc++.h>
#define fre(n) freopen(n".INP","r",stdin);freopen(n".OUT","w",stdout);
#define ll long long
#define str string
#define pll pair<ll,ll>
#define vll vector<ll>
#define lcm(a,b) (a*b)/__gcd(a,b);
#define all(s) s.begin(),s.end()
#define MOD 1000000007LL
#define MAXN 1000000
#define N 6000000
const ll e = 1e18;
using namespace std;
ll n;
ll p, q, m;
ll t;
ll w[N];
ll f;
ll ans;
int main()
{
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    fre("SDIFF")
    cin >> n;
    cin >> p >> q >> m;
    cin >> t;
    for(int i = 0; i < n; i++){
        w[i] = (p * (i + 1) + q)%m;
    }
    deque<ll>dmin, dmax;
    int l = 0;
    for(int r = 0; r < n; r++){
        while(!dmax.empty() && w[dmax.back()] < w[r]){
            dmax.pop_back();
        }
        dmax.push_back(r);
        while(!dmin.empty() && w[dmin.back()] > w[r]){
            dmin.pop_back();
        }
        dmin.push_back(r);
        while((!dmax.empty() && !dmin.empty()) && (w[dmax.front()] - w[dmin.front()] > t)){
            if(dmax.front() == l){
                dmax.pop_front();
            }
            if(dmin.front() == l){
                dmin.pop_front();
            }
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans;
    return 0;
}