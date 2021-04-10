#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int t;
	
	cin>>t;
	while(t--)
	{	int n,i,cnt,ans;
		cnt=0;
		ans=-1;
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		/*}
		for(i=0;i<n;i++)
		{*/
			if(a[i]==1)
			{
				cnt++;
			}	
		}
		if(cnt!=0)
			ans=n-cnt;
		else
		{
			for(i=0;i<n-1;i++)
			{
				if(gcd(a[i],a[i-1])==1)
				{
					ans=n;
					break;
				}
			}
		}
		if (ans==0)
			cout<<"-1"<<"\n";
		else
			cout<<ans<<"\n";
	}
}

