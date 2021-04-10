#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
#define lli long long int
#define llu unsigned long long int
#define vi vector <int>
#define vii vector <lli>
#define pb push_back
#define eb emplace_back
#define pi pair<int,int>
#define mk make_pair
#define mpp map<lli,int>
#define MD 1000000007
#define N 1000000

using namespace std;

void loop()
{
	int n;
	cin>>n;
	lli a[n],b[n];
	mpp mp,mp1,mp2,mp3;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
		mp1[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		mp[b[i]]++;
		mp2[b[i]]++;
	}
	int flag=0;
	for(auto x : mp)
	{
		if((x.second)%2!=0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<-1<<"\n";
	else
	{
		int count=0;
		for(auto x : mp)
		{
			lli z=abs(mp1[x.first]-mp2[x.first])/2;
			count+=z;
			mp3[x.first]+=z;
		}
//		cout<<count<<"\n";
//		for(auto x : mp3)
//			cout<<x.first<<" "<<x.second<<"\n";
		count/=2;
		lli sum=0,mn,ans=0;
		auto it=mp.begin();
		mn=it->first;
		for(auto x : mp3)
		{
			if(count<=0)
				break;
			else if(count<=mp3[x.first])
			{
				ans=(count*(x.first));
				sum+=min(ans,(mn*count*2));
				break;
			}
			else
			{
				ans=(mp3[x.first]*(x.first));
				sum+=min(ans,(mn*mp3[x.first]*2));
				count-=mp3[x.first];
			}
		}
		cout<<sum<<"\n";
	}
}
int main() 
{
	fast;
	int t;
	cin>>t;
	while(t--)
		loop();
}
