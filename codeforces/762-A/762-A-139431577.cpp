#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
vector<ll>arr;
int main()
{
    fast;
 ll n;
 int k,c=0;
 cin>>n>>k;

 for(ll i=1;i<=sqrt(n);i++)
 {
  if(n%i==0)
   {
      arr.push_back(i);
      if(i!=n/i)
      arr.push_back(n/i);
   }
 }

sort(arr.begin(),arr.end());

  if(k>arr.size()||(n==1&&k==2))
    cout<<-1;
   else
    cout<<arr[k-1];
        return 0;

}