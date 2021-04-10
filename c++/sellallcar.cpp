#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j=0,sum=0,s1=0,mod;
		cin>>n;
		mod=pow(10,9)+7;
		long long int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;i--)
		{
			s1=a[i]-j++;
			if(s1>0)
			{
				sum+=s1;
			}
		}
		cout<<sum%mod<<"\n";
	}
}
