#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("password.in","r",stdin);
int k,r,c=1,x,y;
cin>>k>>r;
while(c<=9)
{
    y=c*k;
    if(y%10==0 ||(y-r)%10==0)
    {
        x=c;
        break;
    }

c++;
}

 cout<<x;


    return 0;
}