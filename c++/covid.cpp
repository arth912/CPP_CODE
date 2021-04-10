#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,cnt=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{	
			cin>>a[i];
			if(a[i]==1)
				cnt++;
		}
		if(n<6)
		{
			if(cnt>1)
			cout<<"NO"<<"\n";
			else
			cout<<"YES"<<"\n";
		}
		else
		{
			if(cnt==1)
			cout<<"YES"<<"\n";
			else
			{
				for(i=0;i<n-1;i++)
				{	if(a[i]==1)
					{
						for(j=i+1;j<n;j++)
						{
							if(a[j]==1)
							{	if((j-i)>5)
								cnt++;
								else if((j-i)<6)
								{
									cnt=0;
									goto abc;
								}
							}
							else
							{
								
							}
						}
					}
				}
				abc:
				if(cnt!=0)
				cout<<"YES"<<"\n";
				else
				cout<<"NO"<<"\n";
			}
		}
	}
}
