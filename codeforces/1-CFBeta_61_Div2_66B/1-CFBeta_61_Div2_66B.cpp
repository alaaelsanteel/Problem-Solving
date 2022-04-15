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
int a[n];
loop(n)
cin>>a[i];
int c=1,maxi=INT_MIN,x;
loop(n)
{
 c=1;
 x=i;
    for(int r=i+1;r<n;r++)
    {
     if(a[x]>=a[r])
            c++;
     else
        break;
        x++;
    };
    x=i;
    for(int l=i-1;l>=0;l--)
    {
    if(a[x]>=a[l])
            c++;
     else
        break;
        x--;
    }
    if(c>maxi)
        maxi=c;
}
cout<<maxi;
    return 0;
}
