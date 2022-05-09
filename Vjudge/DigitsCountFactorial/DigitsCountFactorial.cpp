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
   if(n<0)
   cout<<0;

   if(n<=3)
    cout<<1;
    else
    {
   double digSum =((n * log10(n / M_E )+ log10(2 * M_PI * n)/2.0));
     long long ans=floor(digSum)+1;
   cout<<ans;
    }

    return 0;
}
