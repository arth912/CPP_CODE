#include<stdio.h>
int main()
{
	long int i,n,q,l,r,count;
	scanf("%ld%ld",&n,&q);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);						
	}
	while(q--)
	{
		scanf("%ld",&l);
		scanf("%ld",&r);
		count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]<a[i+1])
			{
				if(a[i]>=l && a[i+1]<=r && a[i]<a[i-1] && a[i+1]>a[i+2]	)
				count++;
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				if(a[i]<=l && a[i+1]>=r && a[i]>a[i-1] && a[i+1]>a[i+2]	)
				count--;
			}
		}
		if(count==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
}
