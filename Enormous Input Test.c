#include<stdio.h>
int main()
{
		long long int i,n,a[n],k;
		int count=0;
		scanf("%lld",&n);
		scanf("%lld",&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[n]);
			if(a[n]%k==0)
			count++;
			
		}
		printf("%d",count);
}

