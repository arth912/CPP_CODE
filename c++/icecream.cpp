#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,c5=0,c10=0,c15=0,flag=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==5)
			{
				c5++;
			}
			else if(a[i]==10)
			{	
				if(c5>0)
				{	c5--;
					c10++;
				}
				else
				flag=1;
			}
			else if(a[i]==15)
			{
				if(c10>0)
				{	c15++;
					c10--;
				}
				else if(c5>1)
				{	c15++;
					c5-=2;
				}
				else
				flag=1;
			}
			cout<<c5<<c10<<c15<<"*";
		}
		if(flag==1)
		cout<<"NO"<<"\n";
		else
		cout<<"YES"<<"\n";
		
	}
	return 0;
}
