#include <iostream>
using namespace std;
#define ll long long 
int main() {
    ll k,n;cin>>k>>n;
    ll arr[n],ans[n]={-1},sum=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i,j;
    ll cnt=0;
    for( i=n-1;i>=0;i--)
    {
        if(sum+arr[i]>k)
        { 
        break;
        }
        else
        {	++cnt;
            sum+=arr[i];
            ans[i]=i;
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]+sum>k)
        break;
        else
        {	++cnt;
            sum+=arr[j];
            ans[j]=j;
            
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)
    {
        if(ans[i]>-1)
        cout<<ans[i]<<" "<<i<<endl;
    }
    return 0;
}
