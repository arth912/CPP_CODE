#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i,sum=0;
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i+1]>a[i])
			{
				sum+=(a[i+1]-a[i]-1);
			}
			else
			{
				sum+=(a[i]-a[i+1]-1);
			}
		}
		cout<<sum<<"\n";
	}
}
