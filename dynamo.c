#include<stdio.h>
#include<math.h>
int main()
{
    long long int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int s,a,b,c=0,d,e=0,n,sum=0,sum1=0,x=0,p;
        scanf("%lld",&n);
         scanf("%lld",&a);
         x=pow(10,n);
        printf("--%lld\n",a);
        sum=(2*x+a);
        printf(">>%lld\n",sum);
        scanf("%lld",&b);
        printf("--%lld\n", b);
       	c=(x-b);
        printf(">>%lld\n",c);
        scanf("%lld",&d);
        printf("--%lld\n",d);
       	e=(x-d);
        printf(">>%lld\n",e);
        
        	scanf("%d",&p);
	        if(p!=-1)
        	break;
	 }
return 0;

}

