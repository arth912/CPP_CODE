#include<stdio.h>
int main()
{
	int t,i,j,n,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{	
			count=0;
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				count++;
			}
			b[i]=count;
		}
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[j]);
		}
	}
	return 0;
}

