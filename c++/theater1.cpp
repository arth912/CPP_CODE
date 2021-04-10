#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,sum1=0;
	cin>>t;
	while(t--)
	{
	int n,i,j,k,l,max,count=0,sum=0,sum1=0;
	cin>>n;
	char a[n] ;
	int c[n] , b[4][4]={0} , d[4];
	for(i=0;i<n;i++)
	{
			cin>>a[i]>>c[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]=='A')
		{
			if(c[i]==12)
			b[0][0]++;
			else if(c[i]==3)
			b[0][1]++;
			else if(c[i]==6)
			b[0][2]++;
			else if(c[i]==9)
			b[0][3]++;
		}
		if(a[i]=='B')
		{
			if(c[i]==12)
			b[1][0]++;
			else if(c[i]==3)
			b[1][1]++;
			else if(c[i]==6)
			b[1][2]++;
			else if(c[i]==9)
			b[1][3]++;
		}
		if(a[i]=='C')
		{
			if(c[i]==12)
			b[2][0]++;
			else if(c[i]==3)
			b[2][1]++;
			else if(c[i]==6)
			b[2][2]++;
			else if(c[i]==9)
			b[2][3]++;
		}
		if(a[i]=='D')
		{
			if(c[i]==12)
			b[3][0]++;
			else if(c[i]==3)
			b[3][1]++;
			else if(c[i]==6)
			b[3][2]++;
			else if(c[i]==9)
			b[3][3]++;
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<b[i][j]<<"\n";
		}
	}

	for(i=0;i<4;i++)
	{		
			max=0;
			for(j=0;j<4;j++)
			{
				if(b[j][i]>max && l!=j && i!=i-1)
				{	max=b[j][i];
					l=j;
				}
			}
			d[k++]=max;
	}
	sort(d,d+4);
	for(i=0;i<4;i++)
	{	cout<<-d[i]<<"\t";
	}
	for(k=0;k<4;k++)
	{
		if(d[k]==0)
		sum=sum-100;
		else
		sum=sum+d[i]*(i+1)*25;
	}
	cout<<sum<<"\n";
	sum1+=sum;
	}
	cout<<sum1<<"\n";
	return 0;
}
