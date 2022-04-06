///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
        Author: Alaa Elsanteel
*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;

int n;
cin>>n;
int arr[n];
loop(n)
cin>>arr[i];
int c=1,ex=0;
int ans =0;
 for(int i=1;i<n;i++)
 {
     if(arr[i-1]==arr[i])
        c++;
     if(arr[i-1]!=arr[i]||i==n-1)
     {
         if(ex==0)
          ex=1;

         ans=max(ans,min(ex,c));
         ex=c;
         c=1;
     }


 }
 cout<<ans*2;

    return 0;
}

