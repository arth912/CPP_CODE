#include<bits/stdc++.h>
using namespace std;
int removeduplicate(vector<int> a,int n)
{
	set<int> se;
	for(auto i=a.begin();i!=a.end();++i)
	{
		se.insert(*i);
	}
	return min((int)se.size(),(n/2));
	//set<int> s(a.begin(),a.end());
	//cout<<se.size()<<" ";
	// if (se.size()>(n/2))
		// return (n/2);
	// else
		// return se.size();

}
	
int main()
{
	int n,i;
	cin>>n;
	vector<int>a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	removeduplicate(a,n);
}