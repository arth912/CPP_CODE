#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,cnt=0,f=0;
		cin>>n>>k;
			for(i=2;i*i<=n;i++)
			{
				while(n%i==0)
				{
					n/=i;
					cnt++;
				}
			}
		cout<<cnt;
			if(n>2)
			cnt++;
			if(cnt==k)
			cout<<"1"<<"\n";
			else
			cout<<"0"<<"\n";
		}
		
	
	return 0;
}
