///*******************************THINK TWICE CODE ONCE*******************************///#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
*/
int main()
{
    fast;
int n,m,x,y;
  ll sum=0;
cin>>n>>m;
ll arr[n];
 loop(n)
 {
    cin>>x>>y;
    sum+=min(x,y);
    if(y>x)
        arr[i]=min(x*2,y)-min(x,y);
    else
        arr[i]=0;
 }
 sort(arr,arr+n);
 reverse(arr,arr+n);
 int c=0;
 loop(n)
 {
     if(c<m&&arr[i]!=0)
     {
         c++;
         sum+=arr[i];
     }
     else
        break;
      return 0;

}
