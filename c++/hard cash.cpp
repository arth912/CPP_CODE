#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,sum=0;
		cin>>n;
		cin>>k;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<sum%k<<"\n";
	}
}
