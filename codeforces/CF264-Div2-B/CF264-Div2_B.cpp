#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
     Authour:Alaa Elsanteel
     idea: if((your energy+height[i])-the height of the next pylon <0)
     then you will have to bay (height[i]) dollars to increase the height of any pylon by height[i] and the energy will remain 0
     other wise your energy is equal to (energy+height[i])-the height of the next pylon and the cost won't change

*/
int main()
{
   fast;
  int n;
  cin>>n;
  int a[n+1];
  a[0]=0;
for(int i=1;i<=n;i++)
  cin>>a[i];
int cost=0,energy=0,x=0;
   loop(n)
   {
       x=(a[i]+energy)-a[i+1];
       if(x<0)
       {
           cost+=abs(x);
           energy=0;
       }
       else
        energy=x;
   }
   cout<<cost;
    return 0;
}

