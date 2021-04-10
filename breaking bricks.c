#include<stdio.h>
int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		int s,w1,w2,w3;
		scanf("%d%d%d%d",&s,&w1,&w2,&w3);
		if((w1+w2+w3)<=s)
		printf("1\n");
		else if((w1+w2)<=s || (w2+w3)<=s)
		printf("2\n");
		else
		printf("3\n");
	}
}
