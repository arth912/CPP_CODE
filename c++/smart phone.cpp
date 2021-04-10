#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,max,x;
	cin>>t;
	int a[t];
	for(i=0;i<t;i++)
	cin>>a[i];
	sort(a,a+t);
	for(i=0;i<t;i++)
	{
		max=a[0]*t;
		x=a[i]*t--;
		if(x>max)
		max=x;
	}
	cout<<max;
	return 0;
}

