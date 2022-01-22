#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("password.in","r",stdin))
int n,t,k,d;
cin>>n>>t>>k>>d;
int x=(n+k-1)/k;
int t1=0,t2=d;
for(int i=0;i<x;i++)
{
    if(t1<t2)
        t1+=t;
    else
        t2+=t;
}
int y=max(t1,t2);
if(y<x*t)
    cout<<"YES\n";
    else
        cout<<"NO\n";

return 0;
}