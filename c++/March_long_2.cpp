#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cnt=0;
		int i;
		string a;
		cin>>a;
		if(a[0]=='1')
		{
			cnt+=1;
			for(i=0;i<a.length()-1;i++)
			{
				if(a[i]=='0' && a[i+1]=='1')
					cnt++;		
			}
		}	
		else
		{
			for(i=0;i<a.length()-1;i++)
			{
				if(a[i]=='0' && a[i+1]=='1')
					cnt++;		
			}
		}
		cout<<cnt<<"\n";
	}
}