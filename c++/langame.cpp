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
		char s[1000];
		char s1[]="po",s2[]="desu",s3[]="masu",s4[]="mnida";
		char* p;
		cin>>s;
		if((p=strstr(s,s1)))
		cout<<"FILIPINO"<<"\n";
		else if((p=strstr(s,s2) )||(p=strstr(s,s3)))
		cout<<"JAPANESE"<<"\n";
		else if((p=strstr(s,s4)))
		cout<<"KOREAN"<<"\n";
	}
	return 0;
}
