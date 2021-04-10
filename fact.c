#include<stdio.h>
int main()
{
	long long int t,i=0,j,temp;
	scanf("%lld",&t);
	long long int n,a[t];
	for(i=0;i<t;i++)
	{	scanf("%lld",&n);
		a[i]=n;
	}

	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}
