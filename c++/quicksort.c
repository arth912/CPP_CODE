#include<stdio.h> 
#include<conio.h>
#include<time.h>
#define BILLION 1000000000.0;
int asort(int a[],int l)
{
	int i,j,temp;
	//starting of insertion sort
	for(j=2;j<l;j++)
	{
		temp=a[j];
		i=j-1;
		while(temp<a[i] && i>0)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=temp;
		
	}
	//end of insertion sort
}
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int a[], int low, int high) 
{ 
	int pivot = a[high];  
	int i = (low - 1);
	int j;
for (j = low; j <= high- 1; j++) 
	{ 
		if (a[j] < pivot) 
		{ 
			i++;
			swap(&a[i], &a[j]); 
		} 
	} 
	swap(&a[i + 1], &a[high]); 
	return (i + 1); 
} 
void quickSort(int a[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(a, low, high); 
		quickSort(a, low, pi - 1); 
		quickSort(a, pi + 1, high); 
	} 
} 
int main() 
{ 
	struct timespec start, end;
	double time_spent;
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n],a[n];
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=rand();
		a[i]=arr[i];
	}
	asort(arr,n); 
	clock_gettime(CLOCK_REALTIME, &start);
	quickSort(arr, 0, n-1); 
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for worst case.\n", time_spent);
	clock_gettime(CLOCK_REALTIME, &start);
	quickSort(a, 0, n-1); 
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for avg. case.\n", time_spent);
	return 0; 
} 

