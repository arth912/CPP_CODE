#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	getline(cin,x);
	cout<<x<<endl;
	x.push_back('s');
	cout<<x<<endl;
	x.pop_back();
	cout<<x<<endl;
	return 0;	
}

