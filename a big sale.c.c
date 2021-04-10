#include<stdio.h>
int main()
{
	int t,q,d;
	long long int n;
	float sum=0,p,newp,k;
	scanf("%d",&t);
	while(t--)
	{	sum=0;
		scanf("%lld",&n);
		while(n--)
		{
			scanf("%f%d%d",&p,&q,&d);
			k=p*(100+d)/100;
			newp=k*(100-d)/100;
			sum=sum+(p-newp)*q;
		}
			printf("%.6f\n",sum);

	}
	return 0;
}
