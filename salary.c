#include<stdio.h>
int main()
{
	int t;
	float n,sal;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f",&n);
		if(n<1500)
		{
			sal=n+(n*0.1)+(n*0.9);
		}
		else
		{
			sal=n+500+(n*.98);
		}
		printf("%.2f\t",sal);
	}
	return 0;
}
