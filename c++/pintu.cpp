#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,i,j,min,cnt=0,l=0,k=0,flag=0;
		cin>>n>>m;
		int a[n],b[n],c[m];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
	
		for(i=1;i<m+1;i++)
		{	cnt=0,k=0;
			for(j=0;j<n;j++)
			{
				if(a[j]==i)	
				cnt+=b[j];
				else
				k++;
			}
			if(k==n)
			flag++;
			c[l++]=cnt;	
		}
		sort(c,c+m);
		if(flag==0)
		cout<<c[0];
		else
		cout<<c[flag];
	}
}
