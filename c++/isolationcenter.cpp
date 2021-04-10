#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,cnt1,cnt,q,x;
		char a[n];
		cin>>n>>q;
		for(i=0;i<n;i++)
		cin>>a[i];
		while(q--)
		{	
			cin>>x;
			for(i=0;i<n;i++)
			{	
				for(j=i+1;j<n;j++)
				{
					if(a[i]==a[j])
					cnt1++;
				}
				cout<<"*"<<cnt1;
				if(cnt1>x)
				cnt=cnt1-x;
			}
			cout<<cnt<<"\n";
			
		}
		
		
	}
	return 0;
}
