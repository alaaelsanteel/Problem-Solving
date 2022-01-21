#include <bits/stdc++.h>
using namespace std;

/*void convert (int x)
{
    int n;
    x=n;
    int a[n];
    for(int i=0;n>=1;i++)
    {
        a[i]=n%2;
        n/=2;

    }
}
void get_conver(int x)
{
    for(int i=i-1;i>0;i--)
    {
   cout<<a[i];
    }
}*/

int main()
{
ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("password.in","r",stdin))
 int n;
 cin>>n;
 int arr[n+2]={0};
 long long b[n+2]={0},prefix[n+2]={0};
 for(int i=1;i<=n;i++)
 {
     cin>>arr[i];

 }
 for(int i=1;i<n;i++)
 {
     b[i]=abs(arr[i]-arr[i+1]);
     prefix[i]=prefix[i-1]+b[i];

 }
 b[n]={0};
 prefix[n]=prefix[n-1];
 long long mini,maxi;
 for(int i=1;i<=n;i++)
 {
     if(i==1||i==n)
     {
         mini=max(b[i-1],b[i]);
     }
     else
     {
      mini=min(b[i-1],b[i]);
     }


         maxi =max(prefix[i-1],prefix[n]-prefix[i-1]);
         cout<<mini<<" "<<maxi<<endl;

 }

return 0;

}