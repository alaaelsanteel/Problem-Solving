///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
     fast;
 int n,t;
  cin>>n>>t;
 int arr[n];
  loop(n)
    cin>>arr[i];

    int sum=0,c=-1,res=0;
   loop(n)
   {
        sum+=arr[i];
       if(sum+arr[i]>t)
       {
       while(sum>t)
       {
           c++;
           sum-=arr[c];
       }

       }
       res=max(res,i-c);

   }
 cout<<res;
   return 0;
}
