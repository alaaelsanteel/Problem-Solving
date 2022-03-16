///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel
       Idea :for every leftmost point i searched for the maximum rightmost point I can reach to
       that is equal to arr[left] + d (d=the maximum diffrence between the leftmost and rightmost points )
       then calculated  the number of points between both of them
*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
    int n,d;
    cin>>n>>d;
    int arr[n];
    loop(n)
      cin>>arr[i];
int l=0;
ll ans=0,val=0;
ll num_p=0;
while(l<=n-3)
{
    val=arr[l]+d;
    r=upper_bound(arr,arr+n,val)-arr;
    num_p= (r-l)-1;
  ans += num_p*(num_p-1)/2;

    l++;
}
    cout<<ans;
    return 0;
}

