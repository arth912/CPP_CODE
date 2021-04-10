#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=0,r=0;
		cin>>n;
		while(n!=0)
		{	
			r=r*10;
			r=r+n%10;
			n=n/10;
		}
		cout<<r<<"\n";
	}

}
