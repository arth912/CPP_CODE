#include <stdio.h>
int  main()
{
    int t,x,count=0;
    scanf("%d",&t);
    while(t--) 
    {
		long long int i,k,j;
	    int a[x];
		scanf("%d",&x);
		scanf("%lld",&k);
		for(i=0;i<x;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<x;i++)
		{
			for(j=i+1;j<x;j++)
			{
				if((a[i]+a[j])==k)
				count=1;
				break;
			}if(count==1)
			break;
		}
		if(count==0)
		printf("no");
		else 
		printf("yes");
	} 
	
return 0;
}
