///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll fi[51];
/*
        Author: Alaa Elsanteel
*/
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
   int a;
   ll b;
   cin>>a>>b;
   fi[0]=0;
   fi[1]=1;
   for(int i=2;i<=50;i++)
   {
       fi[i]=fi[i-1]+fi[i-2];
   }
   int x=upper_bound(fi,fi+51,b)-fi;
   cout<<fi[a]<<" "<<x-1;

    return 0;
}
