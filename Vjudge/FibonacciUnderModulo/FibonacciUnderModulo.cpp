///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll fi[100001];
/*
        Author: Alaa Elsanteel
*/
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
    int n;
   cin>>n;
   fi[0]=1;
   fi[1]=1;
    ll modd=998244353;
   for(int i=2;i<=n;i++)
   {
       fi[i]=((fi[i-1]%modd)+(fi[i-2]%modd))%modd;
      // cout<<fi[i]<<" ";
   }

   cout<<fi[n-1];
    return 0;
}
