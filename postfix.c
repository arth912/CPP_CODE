#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int pro(int x);
int push(char y);
char pop();
char stck[100];
int top=0;
int main()
{
	char a[100],b[100];
	int i,j=0;
	printf("enter the exprssion: \n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(isalnum(a[i])!=0)
		b[j++]=a[i];
		else if(pro(stck[top])<pro(a[i]))
		{ 
			push(a[i]);
		}
		else if(pro(stck[top])>pro(a[i]))
		{	while(pro(stck[top])>pro(a[i]))
			{	b[j++]=pop();
			}
			push(a[i]);
		}
		
	}
	while(top!=-1)
		{
		b[j++]=pop();
		}
	for(i=0;i<strlen(b);i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
int pro(int x)
{
	if(x=='$' || x=='^')
	return 3;
	else if(x=='*' || x=='/')
	return 2;
	else if(x=='+' || x=='-')
	return 1;
	else
	return 0;

}
int push(char y)
{
	stck[top++]=y;
}
char pop()
{
	char m;
	m=stck[--top];
	return m;
}

