#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
  fast;
 int n;
 cin>>n;
 int arr[n],b[n];
 loop(n)
  cin>>arr[i];
  int maxi=0;
  for(int i=n-1;i>=0;i--)
{
    if(arr[i]>maxi)
    {
        maxi=arr[i];
        b[i]=0;
    }
    else
    {
        b[i]=maxi-arr[i]+1;
    }
}
loop(n)
 cout<<b[i]<<" ";
      return 0;

}