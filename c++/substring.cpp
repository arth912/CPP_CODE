#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
		cin>>t;
		while(t--)
		{
		
			int n,k,cnt=0,flag=0,i,j;
			cin>>n>>k;
			string s;
			cin>>s;
			//cout<<">>"<<n<<k<<"\n";
			for(i=0;i<n;i++)
			{
				//flag=0;
				if(s[i]=='*')
				{
					cnt++;
					if(cnt>=k)
					{	
						flag=1;
						break;
					}
				}
				else
					cnt=0;
			}
			if(flag==1)
				cout<<"yes"<<"\n";
			else
					cout<<"no"<<"\n";
			
			
		}
}