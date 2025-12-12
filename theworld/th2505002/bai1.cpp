#include <bits/stdc++.h>

using namespace std;
long long n,kq,k;
int main()
{
	freopen("bai1.INP","r",stdin);
	freopen("bai1.OUT","w",stdout);
	cin>>n;
	if(n%4==0)kq++;
	while(1)
	{
		k+=20;
		n-=20;
		kq++;
		if(n<20)break;
	}
	k=0;
	while(1)
	{
		k+=10;
		n-=10;
		if(n<10)break;
		kq++;
	}
	cout<<kq<<;
}