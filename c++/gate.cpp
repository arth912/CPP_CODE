#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,k,ctail=0,temp,chead=0;
		cin>>n>>k;
		char a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]=='H')
			chead++;
			else
			ctail++;
		 } 
		 cout<<">>"<<ctail<<">>"<<chead;
		while(k--)
		{	for(i=n;i>=0;i--)
			{
				if(a[i]=='H')
				{
					chead--;
					temp=chead;
					chead=ctail;
					ctail=temp;					
				}
				else
				ctail--;
				break;
			}
			n--;
				cout<<"__________"<<chead<<"\n";
		}
		cout<<chead<<"\n";
	}
	return 0;
}
