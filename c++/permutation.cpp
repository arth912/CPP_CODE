#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[4]={1,2,3,4},b[4][4],c[4],i,j,s;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>b[i][j];
		}
	}
	int n=INT_MIN;
	do
	{
		s=0;
		c[0]=b[0][a[0]];
		c[1]=b[1][a[1]];
		c[2]=b[2][a[2]];
		c[3]=b[3][a[3]];
		cout<<"\n";
		cout<<c[0]<<"\t"<<c[1]<<"\t"<<c[2]<<"\t"<<c[3]<<"\t";
		sort(c,c+4);
		cout<<-c[0]<<"* \t"<<-c[1]<<"* \t"<<-c[2]<<"* \t"<<-c[3]<<"* \t";
		for(i=0;i<4;i++)
		{
			if(c[i]==0)
			{s-=100;
			cout<<"__"<<s;
			}
			else
			{s=s+c[i]*(i+1)*25;
			cout<<"-"<<s;
		}
		}
		cout<<s<<"\n";
		if(n<s)
		n=s;

		
		
	}while(next_permutation(a,a+4));
	
	cout<<s;
}
