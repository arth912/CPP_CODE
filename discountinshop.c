#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n],b[n],i=0,j,temp,count=0;
		while(n!=0)
		{
			temp=n%10;
			a[i++]=temp;
			n=n/10;
			count++;
		}
		for(i=0;i<count;i++)
		{
			for(j=i+1;j<count;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<count-1;i++)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
