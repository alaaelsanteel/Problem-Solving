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

int n,k;
cin>>n>>k;
int a[n];
loop(n)
cin>>a[i];
sort(a,a+n);

int x;

if(k==0&&a[0]>1)
cout<<1;
else if(k==0&&a[0]==1)
    cout<<-1;
else if(k==n)
    cout<<a[k-1];

else if(k<=n-1)
{
 if(a[k-1]==a[k])
    cout<<-1;
   else
    cout<<a[k-1];
}
    return 0;
}
