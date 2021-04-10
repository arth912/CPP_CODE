#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		char s1[5];
		cin>>s;
		int j=0;
		int l=s.size();
		for(int i=l-5;i<l;i++)
		{
			s1[j++]=s[i];
		}
		if(s1[4]=='o' && s1[3]=='p')
		cout<<"FILIPINO"<<"\n";
		else if(s1[1]=='d'  &&  s1[2]=='e' && s1[3]=='s' && s1[4]=='u') 
		cout<<"JAPANESE"<<"\n";
		else if( s1[1]=='m' && s1[2]=='a' && s1[3]=='s' && s1[4]=='u')
		cout<<"JAPANESE"<<"\n";
		else if(s1[0]=='m' && s1[1]=='n' && s1[2]=='i' && s1[3]=='d' && s1[4]=='a')
		cout<<"KOREAN"<<"\n";
	}
	return 0;
}
