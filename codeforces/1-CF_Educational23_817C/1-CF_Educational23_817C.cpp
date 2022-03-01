///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*ll sum(ll n)
{

 return sum_dig;
}*/
int main()
{
     fast;
 ll n,m;
 cin>>n>>m;
 ll l=0,r=n,mid,c=0,x;

 while(l<=r)
 {
  mid=l+(r-l)/2;

  x=mid;
ll sum_dig=0;
 while(x!=0)
 {
    sum_dig+=x%10;
     x/=10;
 }

     if((mid-sum_dig)>=m)
     {
         c=n-mid+1;
         r=mid-1;
     }
     else
        l=mid+1;
 }
 cout<<c;
   return 0;
}
