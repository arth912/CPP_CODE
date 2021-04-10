#include<stdio.h>
int main()
{
	unsigned long int t,i,j,count=0;
	scanf("%ld",&t);
	while(t--)
	{	count=0; 
		unsigned long int n;
		scanf("%ld",&n);
		unsigned long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		for(i=0;i<n;i++)
		{	
			
			for(j=i+1;j<n;j++)
			{
				if(a[i]%2==0 && a[j]%2!=0 )
				count++;
			}
		}
		printf("%ld\n",count);		
	}
	return 0;
}
	
	
	
	
	

