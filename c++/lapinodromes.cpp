#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{	int t,z;
	cin>>t;
	while(t--)
	{
		int i,x,j,cnt=0;
		string s;
		cin>>s;
		x=s.length();
		if(x%2==0)
		{
			for(i=0;i<s.length()/2;i++)
			{
				for(j=s.length()/2;j<s.length();j++)
				{
					if(s[i]==s[j])
					{
						s[i]=s[j]=0;
						cnt++;
					}
					
				}
			
			}
				if(cnt<s.length()/2)
				cout<<"not";
				else
				 cout<<"yes";
				return 0;	
		}
		else
		{	cnt=0;
			for(i=0;i<s.length()/2;i++)
			{
				for(j=s.length()/2+1;j<s.length();j++)
				{
					if(s[i]==s[j])
					{
						s[i]=s[j]=0;
						cnt++;
					}
					
				}
			
			}
				if(cnt<s.length()/2)
				cout<<"not";
				else
				 cout<<"yes";
				return 0;	
		}
	}

}
