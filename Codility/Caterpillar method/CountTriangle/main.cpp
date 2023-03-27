///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <cstdlib>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
//int f[10000001];
//vector<int>a[100001];
 ll mod =1000000007;
ll fac(ll n)
{
    if (n == 0||n == 1)
        return 1;
    return (n * fac(n-1))%mod;
}
int main()
{
    //freopen("team.in", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
   int n;
   cin>>n;
   int a[n];
   loop(n)
   cin>>a[i];
   sort(a,a+n);
   int ans=0;
   loop(n)
   {
       int k=i+2;
       for(int j=i+1;j<n;j++)
       {
           while(k<n && a[i]+a[j]>a[k])
              k++; //else if e continue the number will get more bigger so there's no need to continue
                   //so we need to make one of the first two values bigger
              ans +=k-j-1;
       }
   }
   cout<<ans;

    return 0;
}
