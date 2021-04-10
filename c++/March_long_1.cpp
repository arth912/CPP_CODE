#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,x,i,flag=0;
	cin>>n>>h>>x;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{	
		//cout<<a[i]<<"\n";
		if(x+a[i]>=h)
		{	cout<<"yes";
			//cout<<"**";
			break;
		}
		else
		{
			flag++;
			//cout<<"##";
		}	
	}
	if (flag==n)
		cout<<"No";
}