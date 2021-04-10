#include<bits/stdc++.h>
using namespace std;
int main()
{	long long int t;
	cin>>t;
	while(t--)
	{
		long long int i,n,p,flag;
		cin>>n>>p;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(p%a[i]!=0)
			{
				flag=0;
			}
			else
			flag++;
		}
		if(flag==0)
		{	
			cout<<"YES\t";
			for(i=0;i<n;i++)
			{
				if(a[i]==1)
				cout<<0*a[i]<<"\t";
				else if(a[i-1]==1 || a[i-1]==0)
				cout<<(p/a[i]+1)<<"\t";
				else
				cout<<0*a[i]<<"\t";
			}
			cout<<"\n";
		}
		else
		cout<<"NO\n";
	}
	return 0;
}
