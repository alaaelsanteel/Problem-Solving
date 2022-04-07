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
   int n;
 cin>>n;
 int a[n];
 loop(n)
 {
     cin>>a[i];
 }
int c=0;
bool one=false,zero=true;
 loop(n)
{
    if(a[i]==1)
    {
        c++;
        one=true;
        zero=false;
    }
    else if(a[i]==0&&!zero&&one)
    {
        c+=1;
        zero=true;
    }

 }
 if(zero&&c!=0)
 cout<<c-1;
else
    cout<<c;

    return 0;
}

