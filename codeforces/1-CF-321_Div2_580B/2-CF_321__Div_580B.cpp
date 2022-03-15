///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel
       Idea :the condition is that no friend should feel poor
        A friend feels poor if in the company there is someone who has at least d units of money more than he does
        I sorted the array then used the two pointers technique and sum the friendship factor as long the money of a friend
        is not more than the money of the first friend +(d-1)

*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
    int n,d;
    cin>>n>>d;
    pair<int,int>p[n];
    loop(n)
      cin>>p[i].first>>p[i].second;

    sort(p,p+n);

 int l=0,r=0;
 ll ans=0,sum=0;
 while(l<n)
 {
                 //end         //start
     while(r<n &&p[r].first-(d-1)<= p[l].first )
     {
         sum += p[r].second;
         r++;

     }
     ans=max(ans,sum);
     sum -= p[l].second;
     l++;
 }
cout<<ans;
    return 0;
}

