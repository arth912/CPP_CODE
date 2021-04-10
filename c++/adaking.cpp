#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	int k,i,j;
		cin>>k;
		char a[8][8];
		a[0][0]='O';
		k--;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(i==0 && j==0)
				continue;
				if(k!=0)
				{
					a[i][j]='.';
					k--;
				}
				else
				a[i][j]='X';
			}
		}
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
			
	}
}
