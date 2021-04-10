#include<stdio.h>
int main()
{
	int t,n,i,j,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		int a[n][2];
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{	
			for(j=i+1;j<n;j++)
			{
				if(a[i][2]<=8)
				{
					if(a[i][2]<=8 && a[i][2]==a[j][2])
					{	
					if(a[i][1]<a[j][1])
					sum+=a[j][1];
					else 
					sum+=a[i][1];
						
					}
					else
					sum+=a[i][1];
					printf(">>%d\n",sum);	
				}
			}
		}
		
	printf("%d\n",sum);
	
	}
}
