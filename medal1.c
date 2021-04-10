#include<stdio.h>
int main()
{
	int n,t,i,j=0,k,l,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
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
		{
			if(b[i]==a[0])
			k=i;
		}
		for(i=0;i<n;i++)
		{
			if(b[i]==a[n-1])
			l=i;
		}
		if(k>l)
		printf("%d\t%d\n",a[n-1],a[0]);
		else
		printf("%d\t%d\n",a[0],a[n-1]);
		
	}
	return 0;
}
