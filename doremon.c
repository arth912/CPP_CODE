#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,n,m,sum=0;
		scanf("%d",&n);
		scanf("%d",&m);
	long int a[n][m];
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					scanf("%ld",&a[i][j]);
				}
			}	
			sum=sum+(n*m);
			for(i=1;i<n-1;i++)
			{
				for(j=1;j<m-1;j++)
				{ 
				int r=1;	
				while(i-r>=0 && i+r<n && j-r>=0 && j+r<m)
				{	if(a[i][j-r]==a[i][j+r]  &&  a[i+r][j]==a[i-r][j] )
					{	r++;
						sum++;
					
					}
					else
					break;
				}
				}
			}
			printf("%d",sum);
		
	}
}
