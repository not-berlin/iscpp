#include<iostream>
#include<algorithm>
using namespace std;
int n,dd,ans;
pair<int,int> a[100005];
bool cmp(pair<int,int> a,pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(a[i].first>dd) ans++,dd=a[i].second;
    }
    cout<<ans;
}
