#include<stdio.h>
int main()
{
	long long int t,i,j,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int a[n],temp;
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		printf("%d",a[i]);
	
	}
	return 0;
}
