#include <stdio.h> 
#include <stdlib.h> 
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
void merge(int a[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = a[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = a[m + 1 + j]; 
	i = 0;
	j = 0;
	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			a[k] = L[i]; 
			i++; 
		} 
		else { 
			a[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) { 
		a[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) { 
		a[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(int a[], int l, int r) 
{ 
	if (l < r) {  
		int m = l + (r - l) / 2; 
		mergeSort(a, l, m); 
		mergeSort(a, m + 1, r); 

		merge(a, l, m, r); 
	} 
} 

void printArray(int A[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 


int main() 
{ 
	struct timespec start, end;
	double time_spent;
	int n;
	printf("enter the size of array ");
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
	mergeSort(arr, 0, n - 1); 
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for worst/best case.\n", time_spent);
	clock_gettime(CLOCK_REALTIME, &start);
	mergeSort(a, 0, n - 1); 
	clock_gettime(CLOCK_REALTIME, &end);
	time_spent = (end.tv_sec - start.tv_sec) +(end.tv_nsec - start.tv_nsec) / BILLION;
	printf("Time elpased is %f seconds for avg. case.\n", time_spent);
	return 0; 
} 

