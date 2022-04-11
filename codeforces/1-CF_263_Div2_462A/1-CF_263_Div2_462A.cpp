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
  int t;
cin>>t;
while(t--)
{
    int c=0;
    int n;
    cin>>n;
    ll a[n],b[n];
    loop(n)
    cin>>a[i];
    loop(n)
    cin>>b[i];
    ll ans=0;
    loop(n)
    {
        if(a[i]<b[i])
            swap(a[i],b[i]);
    }
    loop(n-1)
    {
        ans+=(abs(a[i]-a[i+1])+abs(b[i]-b[i+1]));
    }
    cout<<ans<<endl;

}
    return 0;
}

