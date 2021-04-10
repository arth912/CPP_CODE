#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,j=0,k=1,flag=0;
	cin>>n;
	int a[n][n]={0};
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\n";
		}
	}
	
	while(k!=(n*n+1))
	{
		if(flag==0)
		{
			while(a[i][j+1]==0 && j<n)
			{a[i][j++]=k++;
			cout<<k<"\n";
			}
			flag=1;	
		}
		else if(flag==1)
		{
			while(a[i+1][j]==0 && i<n)
			{a[i++][j]=k++;
			}
			flag=2;
		}	
		else if(flag==2)
		{
			while(a[i][j-1]==0 && j>=0)
			{a[i][j--]=k++;
			}
			flag=3;
		}	
		else if(flag==3)
		{
			while(a[i-1][j]==0 && i>=0)
			{a[i--][j]=k++;
			}
			flag=0;
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
	}
	return 0;
}
