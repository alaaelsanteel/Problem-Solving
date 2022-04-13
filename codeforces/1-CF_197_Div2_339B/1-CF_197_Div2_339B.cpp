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
int n,m;
cin>>n>>m;
int a[m];
loop(m)
cin>>a[i];
ll ans=a[0]-1;
loop(m-1)
{
    if(a[i+1]<a[i])
    {
        ans+=((n-a[i])+a[i+1]);
    }
    else
        ans+=(a[i+1]-a[i]);
}
cout<<ans;

    return 0;
}
