#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n,a[N],b[N];
int main()
{
	freopen("bai2.INP","r",stdin);
	freopen("bai2.OUT","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=a[i]%10;
		}
			for(long long i=1;i<=n;i++)
			for(long long j=1;j<=n;j++)
			for(long long k=1;k<=n;k++)
			if((b[i]+b[j]+b[k])%10==9){cout<<"YES"<<endl;goto endless;}
			{cout<<"NO"<<endl;goto endless;}
				endless:;
	}
}