///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll prefix[1000001];
int main()
{
    fast;

    int n,d;
    cin>>n>>d;
    pair<int,int>p[n];
    loop(n)
        cin>>p[i].first>>p[i].second;

    sort(p,p+n);
    int arr[n];
    prefix[0]=p[0].second;
//set the prefix array
    loop(n)
    {
        arr[i]=p[i].first;
        if(i>0)
            prefix[i]=prefix[i-1]+p[i].second;
    }

    int val=0,up_indx=0,maxi=0,index=0;
    ll sum=0,maxi_sum=0;

    loop(n)
    {
        val=arr[i]+d-1;
        up_indx=upper_bound(arr,arr+n,val)-arr;

        if(i > 0)
            sum = prefix[up_indx-1]-prefix[i-1];
        else
            sum = prefix[up_indx-1];
        if(sum > maxi_sum)
        {
            maxi_sum = sum;
        }
    }
    cout<<maxi_sum;
    return 0;
}
