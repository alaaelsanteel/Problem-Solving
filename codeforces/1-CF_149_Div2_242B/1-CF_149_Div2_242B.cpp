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
int a[n],b[n];
loop(n)
cin>>a[i]>>b[i];
int l=*min_element(a,a+n);
int r= *max_element(b,b+n);
bool ex=false;
loop(n)
{
    if(a[i]<=l &&b[i]>=r)
    {
    ex=true;
    cout<<i+1;
    }
}
if(!ex)
    cout<<-1;
    return 0;
}
