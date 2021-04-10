#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int i,j,l,m,cnt=0,temp;
		cin>>n;
		int x=4*n-1;
		int a[x][2];
		for(i=0;i<x;i++)
		{
			cin>>a[i][0];
			cin>>a[i][1];
		}
		for(i=0;i<x-1;i++)
		{	cnt=0;
			for(j=i+1;j<x;j++)
			{
				if(a[i][0]==a[j][0])
				{	
					cnt++;
					temp=a[i][0];
				}
				
			}
			if(cnt%2!=0)
			l=temp;
		}
		for(i=0;i<x-1;i++)
		{	cnt=0;
			for(j=i+1;j<x;j++)
			{
				if(a[i][1]==a[j][1])
				{	
					cnt++;
					temp=a[i][1];
				}
				
			}
			if(cnt%2!=0)
			m=temp;
		}
		cout<<l<<m<<"\n";
	}
}
