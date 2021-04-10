#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k;
		int a[n],cnt[n];
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			cnt[i]=1;
			if(i!=n-1)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[j]-a[j-1]<=2)
					cnt[i]++;
					else
					break;
				}
			}
			if(i!=0)
			{
				for(k=i-1;k>=0;k--)
				{
					if(a[k+1]-a[k]<=2)
					cnt[i]++;
					else
					break;
				}
				
			}
		}
		sort(cnt,cnt+n);
		cout<<cnt[0]<<"\t"<<cnt[n-1]<<"\n";
		
	}
	return 0;
}
