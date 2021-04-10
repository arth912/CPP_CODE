#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,k,s1=0,s2=0;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s1=s1+a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>k)
			a[i]=k;
			s2=s2+a[i];
		}
		cout<<(s1-s2)<<"\n";
	}
}
