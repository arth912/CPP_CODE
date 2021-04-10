#include<stdio.h>
#include<conio.h>
#include<time.h>
#define BILLION 1000000000.0;
int linears(int[],int ,int );
void main()
{
	struct timespec start, end;
	int n,i,temp;
	double time_spent;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	temp=rand();
	// avg case:
	clock_gettime(CLOCK_REALTIME, &start);
	linears(a,temp,n);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for average case.\n", time_spent);
	//best case:
	clock_gettime(CLOCK_REALTIME, &start);
	linears(a,a[0],n);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for best case.\n", time_spent);
	// worst case:
	clock_gettime(CLOCK_REALTIME, &start);
	linears(a,a[n],n);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for worst case.\n", time_spent);
	
}
int linears(int a[],int t,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		return i;
	}
}

