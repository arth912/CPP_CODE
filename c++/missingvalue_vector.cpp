#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int> &a)
{	
	vector<int> no;
	sort(a.begin(),a.end());
	for(auto i=0;i!=a.size();i++)
	{	
		if(a[i]!=i)
		{
			no.push_back(i);
			break;
		}
	}	
	if(a.back()!=a.size())
		no.push_back(a.size());
	cout<<no.front()<<"*";	

}
int main()
{
	int n,i;
	cin>>n;
	vector<int> a(n);
	for (i=0;i<n;i++)
	{	
		cin>>a[i];	
	}
	duplicate(a);
	
}