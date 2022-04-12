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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
int n;
cin>>n;
int h[n];
 loop(n)
 cin>>h[i];
 // claim //eat
 ll ans=h[0]+1;
 //cout<<ans<<" ";
loop(n-1)
{
    if(h[i+1]>=h[i])
    {
        //jump to the next
        ans+=1;
        // the hight after jumping
        ans+=(h[i+1]-h[i]);
        //eat
        ans+=1;
    }
    else
    {
        //go down
        ans+=(h[i]-h[i+1]);
        //jump
        ans+=1;
        //eat
        ans+=1;
    }
}
cout<<ans;
    return 0;
}
