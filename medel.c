#include<stdio.h>
int main()
{
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
		int n,i,j,k,temp;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		a[n]=b[n];
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
				k=a[(n+1)/2];
				n--;
				printf(">>>%d\t",k);
				if(a[i]!=k)		
				b[i]=a[i];
			}
			for(i=0;i<n;i++)
			{
				printf("\n%d\t",a[i]);
			}
//	}
	
}
