#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,x=1,y,cnt=0;
		cin>>n;
		for(i=0;i<n;i++)
		{	//cout<<"$$"<<cnt;
			if(cnt==0)
			{	//	cout<<"*";
				for(j=0;j<n;j++)
				{
					cout<<x<<"\t";
					x++;					
				}
				cnt=1;
			}
			else if(cnt==1)
			{	//cout<<"@";
				y=x+n-1;
				for(j=n-1;j>=0;j--)
				{
					cout<<y<<"\t";
					y--;
				}
				cnt=0;
				x=x+n;
			}
			cout<<"\n";
		}
	}
}
