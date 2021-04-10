#include<stdio.h>
int main()
{
	int t,n,r,rev;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		rev=0;
		while(n!=0)
		{
			r=n%10;
			n=n/10;
			rev = rev*10 + r;	
		}	
		printf("%d",r);
	}
	return 0;
}
