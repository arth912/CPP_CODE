#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,i,j,l=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,k=0,max1,max2;
	cin>>r>>c;
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	cin>>a[i][j];
		}
	}max1=0;
	for(i=0;i<r;i++)
	{	cnt1=0;
		for(j=0;j<c;j++)
		{	
			if(a[i][j]%2==0)
			cnt1++;
			else
			cnt2++;
		}
		if(max1<cnt1 )
		max1=cnt1;
	}
	for(i=0;i<c;i++)
	{	cnt3=0;
		for(j=0;j<r;j++)
		{	
			if(a[i][j]%2==0)
			cnt3++;
		}
		if(max1<cnt3)
		max1=cnt3;
	}
	max2=0;
	for(i=0;i<r;i++)
	{	cnt2=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]%2==1)
			cnt2++;
		}
		if(max2<cnt2)
		max2=cnt2;
	}
	for(i=0;i<r;i++)
	{	cnt4=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]%2==1)
			cnt4++;
		}
		if(max2<cnt4)
		max2=cnt4;
	}
		cout<<max1<<" "<<max2<<"\n";

	return 0;
}
