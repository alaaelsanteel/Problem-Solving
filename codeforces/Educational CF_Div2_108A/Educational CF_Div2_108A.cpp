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
    ll r,b,d,x,y;
ll ans=1;
    cin>>r>>b>>d;
x=min(r,b);
y=max(r,b);
ans=x*(d+1);
if(ans<y)
     cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;


}

    return 0;
}

