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
 int t,p;
cin>>t>>p;
int c=0;
int seller[t];
for(int i=1;i<=t;i++)
{
    bool ex=false;
    int n;
    cin>>n;
    int a[n];
    loop(n)
     cin>>a[i];
     loop(n)
         if(a[i]<p)
            ex=true;
    if(ex)
    {
    seller[c]=i;
    c++;
    }


}
cout<<c<<endl;

if(c!=0)
    loop(c)
      cout<<seller[i]<<" ";
    return 0;
}

