#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int ts,cnt=0,x,y,i;
		cin>>ts;
		if(ts%2!=0)
		{
			cnt=ts/2;
			cout<<cnt<<"\n";
		}
		else if(ts%2==0)
		{	x=ts/2;
			if(x%2!=0)
				cnt=ts/4;
			else
			{	while(ts%2==0)
				ts=ts/2;
				cnt=ts/2;
			}
			cout<<cnt<<"\n";
		} 
	}
	return 0;
}
