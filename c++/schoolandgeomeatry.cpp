#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,temp,sum,n;
	cin>>t;
	while(t--)
	{sum=0;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(i=0;i<n;i++)
	{
		if(a[i]>b[i])
		sum=sum+b[i];
		else
		sum=sum+a[i];
	}
	cout<<sum<<"\n";
	}
}
