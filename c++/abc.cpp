#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i,j,cnt=0,t,x;
	cin>>t;
	while(t--)
	{
		cnt=0;
		cin>>a>>b;
		for(i=b;i>a;i--)
		{
			for(j=1;j<i;j++)
			{
				x=i-(i-j);
				if(x>a && x<b)
					cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
}
