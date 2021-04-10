#include<stdio.h>
#include<conio.h>
#include<time.h>
#define BILLION 1000000000.0;
int main()
{	
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	struct timespec start, end;
	double time_spent;
	int n,i,fact=1,x;
	printf("enter the no :-");
	scanf("%d",&n);
	clock_gettime(CLOCK_REALTIME, &start);
	for (i=0;i<n;i++)
	{	
		if (n==1)
			fact=1;
		else
			fact=fact*i;
	}
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for factorial.\n", time_spent);
	t-=1;
	}
}

