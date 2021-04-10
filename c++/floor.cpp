#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,i,cnt=0,x;
		cin>>n>>q;
		int f[q],d[q];
		cout<<q;
		for(i=0;i<q;i++)
		{
			cin>>f[i]>>d[i];
		}
		for(i=0;i<q;i++)
		{
			cout<<f[i]<<d[i];
		}
		for(i=0;i<q;i++)
		{
			if(i==0)
			{	
				cnt+=d[i];
				cout<<cnt;
			}
			else
			{
				x=abs(f[i]-d[i]);
				if(f[i]==d[i--])
				cnt+=x;
				else
				cnt=cnt+abs(d[i--]-f[i])+x;
			}
		}
		cout<<cnt;
	}
	return 0;
}
