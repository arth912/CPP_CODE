#include<stdio.h>
#include<conio.h>
#include<time.h>
#define BILLION 1000000000.0;
int asort(int[],int );
int dsort(int[],int );
int smallest_no(int[],int ,int );
int main()
{
	struct timespec start, end;
	int n,i,j,temp;
	double time_spent;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand();
		c[i]=b[i]=a[i];
	}
	asort(b,n);
	dsort(c,n);
	// avg case:
	clock_gettime(CLOCK_REALTIME, &start);
	asort(a,n);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for average case.\n", time_spent);
	//best case:
	clock_gettime(CLOCK_REALTIME, &start);
	asort(b,n);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for best case.\n", time_spent);
	// worst case:
	clock_gettime(CLOCK_REALTIME, &start);
	asort(c,n);
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for worst case.\n", time_spent);
	
}
int asort(int a[],int l)
{
	int i,j,temp,k,pos;
	//starting of insertion sort
	for(k=0;k<l;k++)
	{
		pos=smallest_no(a,l,k);
		if(pos!=l)
		{
			temp=a[k];
			a[k]=a[pos];
			a[pos]=temp;
		}		
	}
	
	//end of insertion sort
}
int dsort(int a[],int l)
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
int smallest_no(int a[],int l,int k)
{
	int i,pos=k,min=a[k];
	for(i=k+1;k<l;k++)
	{
		if(a[i]<min)
		{	min=a[i];
			pos=i;
		}
	}
	return pos;	
}
