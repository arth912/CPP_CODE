#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nos,n,i,j=0,sum=0;
	cin>>nos>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	do{
		cout<<a[0]<<"\t "<<a[1]<<"\t "<<a[2]<<"\t "<<a[3]<<"\n ";
	}while(next_permutation(a,a+n));
	return 0;
}
