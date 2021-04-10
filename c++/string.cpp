#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int i,count=0;
		cin>>s;
		for(i=0;i<s.length()-1;i++)
		{
			if(s[i]!=s[i+1])
			{
				i++;
				count++;
			}
		}
		cout<<count<<"\n";
	}
}
