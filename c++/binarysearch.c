#include<stdio.h>
#include<conio.h>
#include<time.h>
#define BILLION 1000000000.0;
int asort(int[],int );
int binarysrch(int [],int ,int );
int main()
{
	struct timespec start, end;
	int n,i,j,temp;
	double time_spent;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	temp=rand();
	asort(a,n);
	// avg case:
	clock_gettime(CLOCK_REALTIME, &start);
	binarysrch(a,n ,temp);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for average case.\n", time_spent);
	//best case:
	clock_gettime(CLOCK_REALTIME, &start);
	binarysrch(a,n,a[n/2]);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for best case.\n", time_spent);
	// worst case left:
	clock_gettime(CLOCK_REALTIME, &start);
	binarysrch(a,n,a[0]);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for worst left case.\n", time_spent);
	// worst case for right :
	clock_gettime(CLOCK_REALTIME, &start);
	binarysrch(a,n,a[n]);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for worst right case.\n", time_spent);
	
}
int asort(int a[],int l)
{
	int i,j,temp;
	//starting of bubble sort
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//end of bubble sort
}
int binarysrch(int a[],int l,int t)
{
	int mid,left,right,found=0;
	left=0;
	right=l-1;
	
	while(left<=right)
	{	
		mid=(right+left)/2;
		if(a[mid]==t)
		{
			printf("%d",mid+1);
			found=1;
			break;
		}
		else if(a[mid]<t)
		mid++;
		else
		mid--;
	}
	if(left>right && found==0)
	return 0;
	
}
