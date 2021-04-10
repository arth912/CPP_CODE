#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{	int x,q,p,j,i,cnt,cnt1;
		cin>>x>>q;
		int a[x],w[x];
		for(i=0;i<x;i++)
		{
			cin>>a[i];
		}
		for(j=0;j<q;j++)
		{
			cin>>p;
			cnt=0;
			for(i=0;i<x;i++)
			{	cnt1=0;
				w= a[i] ^ p;
				while(w!=0)
				{
					if(w%2==1)
					cnt1++;
					w=w/2;
				}
				if(cnt1%2==0)
				cnt++;			
			}
			cout<<cnt<<" "<<x-cnt;
		}
	
	}
}
