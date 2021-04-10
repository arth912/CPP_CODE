#include<stdio.h>
#include<conio.h>
void main()
{
	int t,sum=0,mean,i,flag,j;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,a[n];
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum+a[i];
		}
		mean=sum/n;
		for(i=0;i<n;i++)
		{
			if(a[i]==mean)
			{	flag=1;
				j=i;
			}
			else 
			flag=0;			
		}
		if(flag==0)
		printf("impossible");
		else
		printf("%d",j+1);
	}
	getch();
	
}
