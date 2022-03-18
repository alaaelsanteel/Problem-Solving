///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel
       Idea :for a spaceship to win it's power should be equal or more than the base power
       for every spaceship search for the bases that it's power is equal to or less than the spaceship power
        and sum the gold of these bases
*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
    int s,b;
   cin>>s>>b;
   int arr[s];
   loop(s)
    cin>>arr[i];

  pair<ll,ll>p[b+1];
     loop(b)
      cin>>p[i].first>>p[i].second;

  sort(p,p+b);
gold[0]=0;
int pw[b];
  for(int i=1;i<=b;i++)
  {
      //prefiex sum for the gold
      if(i>0)
      gold[i] +=gold[i-1]+p[i-1].second;
      //array of powers
       pw[i-1]=p[i-1].first;
  }
  int indx;
  loop(s)
   {
       indx=upper_bound(pw,pw+b,arr[i])-pw;
       cout<<gold[indx]<<" ";
   }
    return 0;
}

