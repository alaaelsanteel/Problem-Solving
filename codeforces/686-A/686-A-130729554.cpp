#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("password.in","r",stdin))
int n,d,c=0;
char a;
cin>>n>>d;
long long sum=d;
while(n--)
{

    cin>>a>>d;
    if(a=='+')
        sum+=d;
     if(a=='-')
     {
         if(d<=sum)
            sum-=d;
         else
            c++;
     }
}
cout<<sum<<" "<<c<<endl;
return 0;
}