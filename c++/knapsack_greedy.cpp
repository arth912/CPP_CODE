#include<stdio.h>
#define max 10
void knapsack(int n , int object[] , float weight[], float value[], float Weight) 
{
   float x[max], totalprofit = 0,temp;
   int i, j, W ;
   W = Weight;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) {
      if (weight[i] > W)
         break;
      else {
         x[i] = 1.0;
         totalprofit = totalprofit + value[i];
         W = W - weight[i];
      }
   }
 
   if (i < n)
      x[i] = W / weight[i];
 
   totalprofit = totalprofit + (x[i] * value[i]);
 
   for(i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   		if(object[j]<object[i])
   		{
   			temp=object[j];
   			object[j]=object[i];
   			object[i]=temp;
   			
   			temp=x[j];
   			x[j]=x[i];
   			x[i]=temp;
		}
	}
   }
   printf("The result is :\n");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);
   printf("\nMaximum profit is : %f", totalprofit);
}
int main()
{
	float weight[max],value[max],Weight;
	float vwratio[max],temp;
	int num,object[max],i,j;
	printf("Enter no. of items.\n");
	scanf("%d",&num);
	printf("Enter weights and values for items.\n");
	for(i=0;i<num;i++)
	{
		scanf("%f %f",&weight[i],&value[i]);
	}
	for(i=0;i<num;i++)
	{
		object[i]=i;
	}
	printf("Enter weight of knapsack\n");
	scanf("%f",&Weight);
	for(i=0;i<num;i++)
	{
		vwratio[i]=value[i]/weight[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(vwratio[i]<vwratio[j])
			{
				temp=vwratio[i];
				vwratio[i]=vwratio[j];
				vwratio[j]=temp;
				
				temp = object[i];
				object[i] = object[j];
				object[j] = temp;
				
				temp=weight[i];
				weight[i]=weight[j];
				weight[j]=temp;
				
				temp=value[i];
				value[i]=value[j];
				value[j]=temp;
			}
		}
	}
	knapsack(num,object,weight,value,Weight);
}

