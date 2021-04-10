#include<stdio.h>
int main ()
{
	int t,n,i,j,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
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
			printf(">>.%d",a[i]);
		}
	/*	int x=a[n/4];
		int y=a[n/2];
		int z=a[3*(n/4)];
		if( x==a[(n/4)-1] || y==a[(n/2)-1] || z==a[3*(n/4)-1])
			printf("-1\t");
		else
		{	
			printf(">>%d %d %d",x,y,z);
		}
	*/	
	}
	return 0;
}
